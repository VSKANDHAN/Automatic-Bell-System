// DS3231_Serial_Easy
// Copyright (C)2015 Rinky-Dink Electronics, Henning Karlsen. All right reserved
// web: http://www.RinkyDinkElectronics.com/
//
// A quick demo of how to use my DS3231-library to 
// quickly send time and date information over a serial link
//
// To use the hardware I2C (TWI) interface of the Arduino you must connect
// the pins as follows:
//
// Arduino Uno/2009:
// ----------------------
// DS3231:  SDA pin   -> Arduino Analog 4 or the dedicated SDA pin
//          SCL pin   -> Arduino Analog 5 or the dedicated SCL pin
//
// Arduino Leonardo:
// ----------------------
// DS3231:  SDA pin   -> Arduino Digital 2 or the dedicated SDA pin
//          SCL pin   -> Arduino Digital 3 or the dedicated SCL pin
//
// Arduino Mega:
// ----------------------
// DS3231:  SDA pin   -> Arduino Digital 20 (SDA) or the dedicated SDA pin
//          SCL pin   -> Arduino Digital 21 (SCL) or the dedicated SCL pin
//
// Arduino Due:
// ----------------------
// DS3231:  SDA pin   -> Arduino Digital 20 (SDA) or the dedicated SDA1 (Digital 70) pin
//          SCL pin   -> Arduino Digital 21 (SCL) or the dedicated SCL1 (Digital 71) pin
//
// The internal pull-up resistors will be activated when using the 
// hardware I2C interfaces.
//
// You can connect the DS3231 to any available pin but if you use any
// other than what is described above the library will fall back to
// a software-based, TWI-like protocol which will require exclusive access 
// to the pins used, and you will also have to use appropriate, external
// pull-up resistors on the data and clock signals.
//

#include <DS3231.h>

// Init the DS3231 using the hardware interface
DS3231  rtc(SDA, SCL);



int rpin=4;
void setup()
{
  // Setup Serial connection
   
   Serial.begin(115200);
   pinMode(rpin,OUTPUT);
 
  // Uncomment the next line if you are using an Arduino Leonardo
  //while (!Serial) {}
  
  // Initialize the rtc object
  rtc.begin();
  
  // The following lines can be uncommented to set the date and time
  //rtc.setDOW(THURSDAY);     // Set Day-of-Week to SUNDAY
  //rtc.setTime(7,15, 30);     // Set the time to 12:00:00 (24hr format)
  //rtc.setDate(3, 11, 2022);   // Set the date to January 1st, 2014
}

void loop()
{
  //Declare variable for current time
  String tt=rtc.getTimeStr();
  Serial.println(tt);
  if(tt=="09:10:00"){
    Serial.print("the test is passed");
  }
  else if(tt=="10:00:00"){
    digitalWrite(rpin,HIGH);
    delay(5000);
    digitalWrite(rpin,LOW);
  }
   else if(tt=="10:50:00"){
    digitalWrite(rpin,HIGH);
    delay(5000);
    digitalWrite(rpin,LOW);
  }
   else if(tt=="11:10:00"){
    digitalWrite(rpin,HIGH);
    delay(5000);
    digitalWrite(rpin,LOW);
  }
   else if(tt=="12:00:00"){
    digitalWrite(rpin,HIGH);
    delay(5000);
    digitalWrite(rpin,LOW);
  }
   else if(tt=="12:50:00"){
    digitalWrite(rpin,HIGH);
    delay(5000);
    digitalWrite(rpin,LOW);
  }
   else if(tt=="01:50:00"){
    digitalWrite(rpin,HIGH);
    delay(5000);
    digitalWrite(rpin,LOW);
  }
   else if(tt=="02:40:00"){
    digitalWrite(rpin,HIGH);
    delay(5000);
    digitalWrite(rpin,LOW);
  }
   else if(tt=="03:30:00"){
    digitalWrite(rpin,HIGH);
    delay(5000);
    digitalWrite(rpin,LOW);
  }
   else if(tt=="03:40:00"){
    digitalWrite(rpin,HIGH);
    delay(5000);
    digitalWrite(rpin,LOW);
  }
   else if(tt=="04:30:00"){
    digitalWrite(rpin,HIGH);
    delay(5000);
    digitalWrite(rpin,LOW);
  }
   else if(tt=="08:52:00"){
    digitalWrite(rpin,HIGH);
    delay(5000);
    digitalWrite(rpin,LOW);
    Serial.print("Output is supplied to the pin");
  } else if(tt=="08:52:30"){
    digitalWrite(rpin,HIGH);
    delay(5000);
    digitalWrite(rpin,LOW);
    Serial.print("Output is supplied to the pin");
  }
 
  // Send Day-of-Week
   
  Serial.print(rtc.getDOWStr());
  Serial.print(" ");
  
  // Send date
  Serial.print(rtc.getDateStr());
  Serial.print(" -- ");

  // Send time
  Serial.println(rtc.getTimeStr());
  
  // Wait one second before repeating :)
  delay (1000);
}
