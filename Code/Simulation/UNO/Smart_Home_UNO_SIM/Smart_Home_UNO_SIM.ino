// Smart Home Simulation Code for the UNO

/* Includes Section */
#include <Wire.h>
#include <ThreeWire.h>
#include <RtcDS1302.h>
#include <LiquidCrystal_I2C.h>
#include <DFRobot_LCD.h>
#include <Keypad.h>

/* Variables Section */
#define RTC_CLOCK 2
#define RTC_DATA 3
#define RTC_RESET 4
#define KP_R1 5
#define KP_R2 6
#define KP_R3 7
#define KP_R4 8
#define KP_C1 9
#define KP_C2 10
#define KP_C3 11
#define KP_C4 12
#define ALARM A3
#define DOOR A2
#define LDR_OUT A1
#define OUTDOOR_LIGHT A0

// Number of pressed keys
int entered_Num = 5;

// LDR Variable
bool LDR_Status = 0;

// Password variables
String pad;
char keyPressed;
int pass_Flag = 0;

// Date and Time variables
const long Event_Time = 30000;
unsigned long Previous_Time = 0;

// Keypad variables
const byte ROWS = 4; // Set up four rows for the Keypad
const byte COLS = 4; // Set up four coloumns for the Keypad

// LCD RGB Colors
const int colorR = 255;
const int colorG = 0;
const int colorB = 0;

// Set up the modules
DFRobot_LCD lcd(16,2);
ThreeWire myWire(RTC_DATA,RTC_CLOCK,RTC_RESET);
RtcDS1302<ThreeWire> Rtc(myWire);

char Keys[ROWS][COLS] =
{
  {'7','8','9','A'},
  {'4','5','6','B'},
  {'1','2','3','C'},
  {'*','0','#','D'}
};

// Address the pins of the Keypad
byte rowPins[ROWS] = {KP_R1,KP_R2,KP_R3,KP_R4};
byte colPins[COLS] = {KP_C1,KP_C2,KP_C3,KP_C4};   

Keypad customKeypad = Keypad(makeKeymap(Keys), rowPins, colPins, ROWS, COLS);

void setup() 
{
  pinMode(LDR_OUT, INPUT);
  pinMode(ALARM, OUTPUT);
  pinMode(ACCESS_GRANTED, OUTPUT);
  pinMode(OUTDOOR_LIGHT, OUTPUT);

  // Starting Serial connection
  Serial.begin(9600);

  // Starting the LCD
  lcd.init();
  lcd.setRGB(colorR, colorG, colorB);           
  lcd.clear();         

  // Starting the Real Time Clock
  Rtc.Begin();
  RtcDateTime currentTime = RtcDateTime(__DATE__ , __TIME__);
  Rtc.SetDateTime(currentTime);
}

void loop() 
{
  // Set_Date_Time();

  String password = "123456";    // Set up the password
  
  read_Serial();

  OUTDOOR();
  readKeypad();
  if(keyPressed == '#')
  {
    if(pad == password)
    {
      ACCESS_GRANTED();
    }
    else
    {
      ACCESS_DENIED();
    }
  }
}

void Set_Date_Time()
{
  if(pad == 0)
  {
    RtcDateTime now = Rtc.GetDateTime();            // Get the current Date & Time

    unsigned long Current_Time = millis();

    if(Current_Time - Previous_Time >= Event_Time)  // Timer to change every one sec
    {
      lcd.setCursor(0,0);
      lcd.print("Date: ");
      lcd.print(now.Day());
      lcd.print("/");
      lcd.print(now.Month());
      lcd.print("/");
      lcd.print(now.Year());

      lcd.setCursor(0,1);
      lcd.print("Time: ");
      lcd.print(now.Hour());
      lcd.print(":");
      lcd.print(now.Minute());
      lcd.print(":");
      lcd.print(now.Second());
    }
  }
}

void OUTDOOR()
{
  LDR_Status = analogRead(LDR_OUT);
  
  if(LDR_Status < 15)
  {
    digitalWrite(OUTDOOR_LIGHT, HIGH);
  }
  else
  {
    digitalWrite(OUTDOOR_LIGHT, LOW);
  }
}

void readKeypad()
{
  keyPressed = customKeypad.getKey();
  if (keyPressed != '#')
  {
    String typed_Pass = String(keyPressed);
    pad += typed_Pass;
    lcd.setCursor(0, 0);
    lcd.print("Taking password:");
    if(keyPressed)
    {
      lcd.setCursor(entered_Num++, 1);
      lcd.print("#");
    }
  }
}

void ACCESS_GRANTED()
{
  digitalWrite(DOOR, HIGH);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Correct Password");
  lcd.setCursor(0,1);
  lcd.print("Access Granted:)");

  pad = "";

  delay(10000);
  digitalWrite(DOOR, HIGH);
  lcd.clear();
  entered_Num = 5;
}

void ACCESS_DENIED()
{
  if(2 != pass_Flag)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Incorrect Pass ");
    lcd.setCursor(0,1);
    lcd.print("Access Denied!!");

    pad = "";

    delay(5000);
    lcd.clear();
    entered_Num = 5;
    pass_Flag++;
  }
  else
  {
    lcd.clear();
    while(1)
    {
      lcd.setCursor(0,0);
      lcd.print("    ALERT!!!");
      lcd.setCursor(0,1);
      lcd.print("  Home Locked!  ");
      digitalWrite(ALARM, HIGH);
      delay(500);
      digitalWrite(ALARM, LOW);
      delay(500);
    }
    lcd.clear();
    entered_Num = 5;
  }
}

void read_Serial()
{
  if(Serial.available() > 0)
  {
    char data = Serial.read();
    ACCESS_GRANTED();
  }
}