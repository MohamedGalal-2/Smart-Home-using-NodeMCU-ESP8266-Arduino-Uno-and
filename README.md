# Smart-Home-using-Arduino-Uno-and-NodeMCU-ESP8266

## Table of Contents
- [Software requirements](#Software-requirements)
- [Hardware requirements](#Hardware-requirements)
- [Objective](#Objective)
- [Applications](#Applications)
- [Block Diagram](#Block-Diagram)
- [Project Implementation](#Project-Implementation)
- [Schematic Circuit Diagram](#Schematic-Circuit-Diagram)
- [Mobile Application](#Mobile-Application)
- [UNO Code](#UNO-Code)
- [ESP Code](#ESP-Code)
- [Conclusion](#Conclusion)
- [Licence](#License)
  
### Software requirements

1. Development Environments

  - Arduino IDE: The primary development environment for Arduino UNO, used for writing, compiling, and uploading code to the microcontroller.

2. Libraries and Dependencies

  - Arduino Libraries: Essential libraries to manage specific hardware components and functionalities.
  - Wire Library: For I2C communication, used with RTC modules and LCDs.
  - LiquidCrystal_I2C Library: To control the 16x2 LCD with I2C.
  - Keypad Library: To handle the 4x4 keypad for user input.
  - DS1302 Library: For interfacing with the RTC module.
  - ESP8266 Libraries: Libraries specific to NodeMCU ESP8266 for Wi-Fi connectivity and web server functionality.
  - ESP8266WiFi Library: For Wi-Fi connectivity and networking.

### Hardware requirements

1. Microcontrollers
Arduino UNO: A general-purpose microcontroller board used to control sensors and relays, manage input/output devices, and process automation logic.
NodeMCU ESP8266: A microcontroller with built-in Wi-Fi capability, enabling communication with external networks and providing remote control functionality.

2. Sensors
  - LDR Sensor Module: A light-dependent resistor for detecting ambient light levels, useful for automating lighting controls.
  - Gas Sensor Module: Detects the presence of gases (e.g., methane, LPG), used for safety and security.
  - Flame Sensor Module: Detects fire/flame, providing early warning in case of fire incidents.
  - Water Sensor Module: Detects water or moisture, used for monitoring leaks or water levels.

3. Output Devices
  - 1x 1-Channel Relay Module: Controls a single device, such as a water pump, based on sensor data or user input.
  - 2x 2-Channel Relay Module: Controls two devices, useful for managing lights, fans, or other appliances.
  - LEDs: Used as indicators for system status or to simulate lighting control.
  - Buzzer: Provides audible alerts for alarms or notifications.

4. User Interfaces
  - 16x2 LCD with I2C: A display for showing system status, sensor readings, or other relevant information.
  - 4x4 Keypad: Allows user input for interacting with the smart home system.

5. Power Supply
  - 3x 16500 Li-Ion 3.7V Batteries: Rechargeable batteries for portable power supply. Multiple batteries may be required for different components.
  - DC Power Adapter: For providing stable power to NodeMCU ESP8266 or other components.

6. Additional Components
  - Breadboards: At least two 60-pin breadboards and one half-sized breadboard for prototyping and testing connections.
  - Jumper Wires: Various lengths and colors for connecting components on the breadboard.
  - Resistors: Typically 330-ohm and 1k-ohm resistors for controlling current through LEDs and other components.
  - Diodes: May be used for preventing backflow of current in relay-controlled circuits.
  - Capacitors: To stabilize power supply and smooth out fluctuations.

7. Connectivity
  - USB Cables: For connecting Arduino UNO and NodeMCU ESP8266 to the computer for programming and power.
  - Serial Connection Wires: To establish communication between Arduino UNO and NodeMCU ESP8266.
  
### Objective 

<p> The objective of this project is to design and build a comprehensive smart home system that integrates multiple functionalities such as security, automation, and monitoring. By combining Arduino UNO for sensor control and NodeMCU ESP8266 for Wi-Fi connectivity and remote access, the project aims to create a scalable and modular smart home solution. The system will feature various sensors, relays, and user interfaces, providing a robust platform for smart home applications.</p>


### Applications

<p>
Smart home systems offer a wide range of applications, bringing convenience, security, and energy efficiency to residential settings. With Arduino UNO and NodeMCU ESP8266, you can develop a versatile smart home solution. Here's a summary of the typical applications:</p>

1. Home Automation: Automate lighting, appliances, and curtains/blinds. Features can include automated dimming, time-based scheduling, and remote control.
2. Security and Safety: Implement sensors for intrusion detection, gas and smoke detection, flame detection, and water leak detection. These systems can trigger alarms, alerts, and other safety protocols.
3. Energy Management: Use sensors to adjust lighting based on ambient light levels, create smart thermostats, and monitor energy consumption for efficiency.
4. Remote Monitoring and Control: NodeMCU ESP8266 provides Wi-Fi connectivity, allowing you to monitor and control smart home devices remotely. This can also include sending alerts and integrating with voice control systems like Alexa or Google Assistant.
5. Home Environment Monitoring: Monitor temperature, humidity, and air quality for a more comfortable home environment. Sensors can also detect changes in light levels, aiding in automation.
6. Custom User Interfaces: Create custom control panels, touchscreen interfaces, or keypads for interacting with the smart home system.
7. These applications offer a wide range of benefits, from convenience and energy savings to enhanced security and remote control. You can mix and match these applications to create a smart home system tailored to your specific needs and preferences.

### Block Diagram

![Block Diagram](https://i.imgur.com/oHGpaoM.png)

<p><b>Fig: System Block Diagram</b></p>

### Project Implementation

1.	Sensor Integration with Arduino UNO and the ESP8266:
  - Connect the sensors to the Arduino UNO for local control and monitoring.
  - Develop code to manage sensor data and trigger relays or alarms based on sensor readings.
3.	Output Device Control:
  - Use relays to control external devices like water pumps and lights.
  - Integrate user interaction through a keypad and LCD for local control.
4.	Communication with NodeMCU ESP8266:
  - Establish serial communication between Arduino and NodeMCU for data transfer.
  - Build a simple web server with NodeMCU to allow remote access and control.
5.	Automation and Security Features:
  - Implement automation logic to control lights, water pumps, etc., based on sensor readings and time schedules.
  - Integrate safety features to trigger alarms and send alerts in case of gas leaks, fire, or water leaks. 

### Schematic Circuit Diagram

![Schematic Circuit Diagram](https://i.imgur.com/V5KZuXf.jpeg)

<p>Fig: Schematic Circuit Diagram</p>

### Mobile Application

A mobile application for smart home systems provides users with a convenient way to control, monitor, and interact with their smart home devices from anywhere. Here's a summary of the key features and considerations for developing a mobile app for a smart home system that uses Arduino UNO and NodeMCU ESP8266.

<b>Key Features</b>
1. Remote Control: Allows users to control home automation features, such as lighting and relays, from their mobile devices. This includes setting schedules and automation rules.
2. Real-time Monitoring: Displays real-time sensor data (e.g., temperature, gas, flame detection) and provides alerts for significant events like gas leaks or water leaks.
3. User Authentication: Requires users to authenticate (e.g., with passwords or biometrics) to ensure security and prevent unauthorized access.
4. Integration with NodeMCU ESP8266: Communicates with NodeMCU to retrieve data and send commands to the smart home system. This can be achieved via HTTP/HTTPS or WebSockets for real-time updates.
5. Interactive Dashboard: Offers an intuitive user interface for displaying system status and providing control options.
6. Push Notifications: Sends alerts and notifications to users' mobile devices when certain events occur, like a security breach or sensor trigger.

<b>Development Considerations</b>
1. Cross-Platform Development: Using frameworks like Flutter or React Native allows the app to be developed once and deployed on both iOS and Android.
2. Backend Integration: If needed, integrate with backend services (like Firebase) for additional features such as user authentication, data storage, or cloud-based processing.
3. Security and Privacy: Implement secure communication, data encryption, and strong authentication mechanisms to protect user data and system integrity.
4. Quality Assurance and Testing: Thoroughly test the mobile app on various devices to ensure functionality and security. Address any vulnerabilities before deployment.
5. The mobile application for a smart home system enhances user experience by providing easy access and control over various smart home functionalities. By integrating with NodeMCU ESP8266, the app enables remote monitoring, real-time communication, and automation control, making it an essential part of a modern smart home ecosystem.

![Schematic Circuit Diagram](https://i.imgur.com/LKENRbA.jpeg)

<p>Fig: Mobile Application designed for this project/p>


### UNO Code

```c
// Smart Home Practical

/* Includes Section */
#include <Wire.h>
#include <ThreeWire.h>
#include <RtcDS1302.h>
#include <LiquidCrystal_I2C.h>
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

// ALARM
bool ALARM_OFF_STATUS = 0;

// Password variables
String pad;
char keyPressed;
int pass_Flag = 0;

// Date and Time variables
const long Event_Time = 30000;
unsigned long Previous_Time = 0;

// DOOR Timer
unsigned long time_for_action;
#define OUTDOORINTERVAL 5000

// Keypad variables
const byte ROWS = 4; // Set up four rows for the Keypad
const byte COLS = 4; // Set up four coloumns for the Keypad

// Set up the modules
LiquidCrystal_I2C lcd(0x27, 16, 2);   // Setting the connection with the I2C #I2C Address: 0x27
ThreeWire myWire(RTC_DATA,RTC_CLOCK,RTC_RESET);
RtcDS1302<ThreeWire> Rtc(myWire);

char Keys[ROWS][COLS] =
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
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
  pinMode(DOOR, OUTPUT);

  digitalWrite(ALARM, LOW);
  digitalWrite(DOOR, HIGH);

  // Starting Serial connection
  Serial.begin(115200);
  int myTimeout = 100; // milliseconds for Serial.readString
  Serial.setTimeout(myTimeout);

  // Starting the LCD
  lcd.init();          
  lcd.backlight();     
  lcd.clear();         

  // Starting the Real Time Clock
  Rtc.Begin();
  RtcDateTime currentTime = RtcDateTime(__DATE__ , __TIME__);
  Rtc.SetDateTime(currentTime);
}

void loop() 
{
  StartUP();
  //Set_Date_Time();
  String password = "123";    // Set up the password
  
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
  LDR_Status = digitalRead(LDR_OUT);
  
  String Serial_Read;
  Serial_Read = Serial.readStringUntil('\n');

  if(1 == LDR_Status)
  {
    digitalWrite(OUTDOOR_LIGHT, LOW);
  }
  else
  {
    digitalWrite(OUTDOOR_LIGHT, HIGH);
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
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Correct Password");
  lcd.setCursor(0,1);
  lcd.print("Access Granted:)");

  String Serial_Read;

  Serial_Read = Serial.readStringUntil('\n');   

  if(Serial_Read[0] == '0')
  {
    StartUP();
  }

  digitalWrite(DOOR, LOW);
  delay(1000);
  digitalWrite(DOOR, HIGH);

  delay(5000); 
  
  pad = "";

  lcd.clear();
  pass_Flag = 0;
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
    while(pass_Flag != 0)
    {
      lcd.setCursor(0,0);
      lcd.print("    ALERT!!!");
      lcd.setCursor(0,1);
      lcd.print("  Home Locked!  ");
      digitalWrite(ALARM, HIGH);
      delay(500);
      digitalWrite(ALARM, LOW);
      delay(500);
      StartUP();
    }
    lcd.clear();
    entered_Num = 5;
  }
}

void TURN_OFF_ALARM()
{
  String Serial_Read;
  Serial_Read = Serial.readStringUntil('\n');

  if(Serial_Read[0] == '3')
  {
    pass_Flag == 0;
  }
}

void Fire_Alert()
{
  lcd.setCursor(0,0);
  lcd.print("  FIRE ALERT!!  ");
  lcd.setCursor(0,1);
  lcd.print("Flame Detected!!");
  digitalWrite(ALARM, HIGH);
  delay(500);
  digitalWrite(ALARM, LOW);
  delay(500);
}

void StartUP()
{
  while(Serial.available() > 0)
  {
    String Serial_Read;
    long message;

    Serial_Read = Serial.readStringUntil('\n');
    Serial.println(Serial_Read);      

    if(Serial_Read[0] == '2')
    {
      Fire_Alert();
    }
    else if(Serial_Read[0] == '1')
    {
      ACCESS_GRANTED();
    }
    else if(Serial_Read[0] == '0')
    {
      digitalWrite(DOOR, HIGH);
    }
    else if(Serial_Read[0] == '3')
    {
      pass_Flag = 0;
    }
    else if(Serial_Read[0] == '4')
    {
      ACCESS_DENIED();
    }
    else if(Serial_Read[0] == '7')
    {
      digitalWrite(OUTDOOR_LIGHT, LOW);
      delay(2000);
    }
    else if(Serial_Read[0] == '8')
    {
      digitalWrite(OUTDOOR_LIGHT, HIGH);
      delay(2000);
    }
    lcd.clear();
  }
}
```

### ESP Code

```c
// Smart Home Code for the ESP

/* Includes Section*/
#include <Wire.h>
#include <SoftwareSerial.h>
#include <ThingSpeak.h>
#include <ESP8266WiFi.h>

SoftwareSerial s(3,1);

// Set up the CLIENT connection
WiFiClient  client;
unsigned long counterChannelNumber = 2536970;                // Channel ID
const char * myCounterReadAPIKey = "0AN0ZZ63TWGFSD8F";       // Read API Key
const int FieldNumber1 = 1;                                  // The field you wish to read
const int FieldNumber2 = 2;                                  // The field you wish to read

// Timer
#define INTERVAL 50
unsigned long time_for_action;

// Set up the pin variables
#define FLAME_SENSOR      5
#define EXHAUST_FAN       4
#define BATH_TUB          12
#define FIRE_EXTINGUISHER 14

bool FLAME_SENSOR_STATUS = 0;

bool ALARM_OFF_Status = 0;

void setup() {
  // Connecting to Wi-Fi
  s.begin(115200);
  s.println();

  WiFi.begin("Galal", "600070000");                 // write wifi name & password           

  s.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    s.print(".");
  }
  s.println();
  s.print("Connected, IP address: ");
  s.println(WiFi.localIP());
  ThingSpeak.begin(client);

  pinMode(FLAME_SENSOR, INPUT);
  pinMode(EXHAUST_FAN, OUTPUT);
  pinMode(BATH_TUB, OUTPUT);
  pinMode(FIRE_EXTINGUISHER, OUTPUT);

  digitalWrite(EXHAUST_FAN, HIGH);
  digitalWrite(BATH_TUB, HIGH);
  digitalWrite(FIRE_EXTINGUISHER, HIGH);
}

void loop() {
  FLAME_SENSOR_STATUS = digitalRead(FLAME_SENSOR);

  int A;
  if(millis() > time_for_action)
  {  
    time_for_action = millis() + (unsigned long) INTERVAL;
    A = ThingSpeak.readLongField(counterChannelNumber, FieldNumber1, myCounterReadAPIKey);
    s.println(A);
  }

  if(A == 5)
  {
    digitalWrite(BATH_TUB, LOW);
  }
  else if(A == 6)
  {
    digitalWrite(BATH_TUB, HIGH);
  }

  if(FLAME_SENSOR_STATUS == LOW)
  {
    while(!FLAME_SENSOR_STATUS)
    {
      FLAME_SENSOR_STATUS = digitalRead(FLAME_SENSOR);
      s.println(2); // FIRE ALERT
      digitalWrite(EXHAUST_FAN, LOW);
      digitalWrite(FIRE_EXTINGUISHER, LOW);
    }
  }
  else
  {
    digitalWrite(EXHAUST_FAN, HIGH);
    digitalWrite(FIRE_EXTINGUISHER, HIGH);
  }

}
```

### Conclusion

This smart home project offers a comprehensive solution that combines the simplicity and versatility of Arduino with the connectivity of NodeMCU ESP8266. With integrated security and automation features, along with remote control capabilities, the project demonstrates a practical approach to building a modern smart home system. 

### License
This repository is licensed under the MIT License. Please see the LICENSE file for more information
