#include <DS3231.h>

// Init the DS3231 using the hardware interface
DS3231  rtc(SDA, SCL);



int rpin=3;
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
  //rtc.setDOW(FRIDAY);     // Set Day-of-Week to SUNDAY
  //rtc.setTime(3,50, 30);     // Set the time to 12:00:00 (24hr format)
  //rtc.setDate(4, 11, 2022);   // Set the date to January 1st, 2014
}

void loop()
{
  //Declare variable for current time
  String tt=rtc.getTimeStr();
 
 
  if(tt=="09:10:00"){
    //Turns Relay ON
    digitalWrite(rpin,LOW);
    delay(5000);
    //Turns Relay OFF    
    digitalWrite(rpin,HIGH);
  }
  else if(tt=="10:00:00"){
    digitalWrite(rpin,LOW);
    delay(5000);
    digitalWrite(rpin,HIGH);
  }
   else if(tt=="10:50:00"){
    digitalWrite(rpin,LOW);
    delay(5000);
    digitalWrite(rpin,HIGH);
  }
   else if(tt=="11:10:00"){
    digitalWrite(rpin,LOW);
    delay(5000);
    digitalWrite(rpin,HIGH);
  }
   else if(tt=="12:00:00"){
    digitalWrite(rpin,LOW);
    delay(5000);
    digitalWrite(rpin,HIGH);
  }
   else if(tt=="12:50:00"){
    digitalWrite(rpin,LOW);
    delay(5000);
    digitalWrite(rpin,HIGH);
  }
   else if(tt=="01:50:00"){
    digitalWrite(rpin,LOW);
    delay(5000);
    digitalWrite(rpin,HIGH);
  }
   else if(tt=="02:40:00"){
    digitalWrite(rpin,LOW);
    delay(5000);
    digitalWrite(rpin,HIGH);
  }
   else if(tt=="03:30:00"){
    digitalWrite(rpin,LOW);
    delay(5000);
    digitalWrite(rpin,HIGH);
  }
   else if(tt=="03:40:00"){
    digitalWrite(rpin,LOW);
    delay(5000);
    digitalWrite(rpin,HIGH);
  }
   else if(tt=="04:30:00"){
    digitalWrite(rpin,LOW);
    delay(5000);
    digitalWrite(rpin,HIGH);
  }
 
  else{
    digitalWrite(rpin,HIGH);
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
