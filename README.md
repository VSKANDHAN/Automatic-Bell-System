# Automatic-Bell-System
  Hi🙋‍♂️this is V S KANDHAN,Happy to see you here,Kudos that you curiously scanned the QR.Here we are going to build the AUTOMATIC BELL SYSTEM for institutions.
The conventional way of ringing the bell in schools,colleges require a physical presence of the person to ring the bell at the apropriate periods.In our college the watchman need to be present there to ring the bell after each and every periods.So to overcome this headache process,i tried something same as already available in the market,but the main moto is to buid this one in cost effective way,So thats the final thing which was installed in our college,in the last session i also attach the total cost and price details for each component used in this project.
# Detailed Overview Of This-Project
  This project is based on Arduino Nano,you can also choose Arduino UNO,and whatever MicroControllers you are comfortable with,i choosed Nano for its Size and cost.The another main component in this project is the RTC(Real Time Clock) Module,let me cover this RTC in next section.and the last component is 5V the Relay Module.First to know the current time we need the RTC to send the current time to arduino,and in the arduino we made the logic for the bell according to the RTC current time,i think right now you guessed the logic.Through RTC we will get the current time,according to the current time,in arduino we made the conditional statements,in this case"if else" statements to ring the bell according to the period timings.In the conditionsl statement,if the current time equals to the period timings,then turn the Relay HIGH(turns on) to ring the bell,otherwise keeps the Relay LOW(turns off).So this is the simple logic behind this project.You may not wonder about the logic😂,but this logic is much enough to make these things done,we can also use other conditonal statements like "Switch case" thats your choice.Try to keep your code as sample as it.And the last thing is,if incase of an need to ring the bell,other than normal period timings,we can also use Alternative switch to ring the bell without the Arduino,also attached the circuit diagram for this entire connections.
# Components Required
  1.Arduino Nano      
  2.RTC(DS3231) Module    
  3.5V Relay Module    
  4.Switch    
  5.Bell(if provided in college or school no needed😅)use Home Calling-Bell for testing😁
# Arduino Nano
  After Arduino UNO, the most popular board in the Arduino line-up is probably the Arduino Nano. Both UNO and Nano are based on ATmega328P Microcontroller but Nano is significantly smaller in size compared to UNO.Despite the size, Arduino Nano packs in more or less the same features as UNO. If you compare UNO and Nano, then Nano lacks the DC Power Jack and contains a mini-B type USB connector. Other than that Nano is very similar to UNO in terms of functionality.The Nano board is designed in such a way that the pins are breadboard friendly so that you can easily mount it on one for your DIY projects.Overall, the Arduino Nano is a very good alternative to the mighty Arduino UNO and is available at a lower price. Personally speaking, I suggest Arduino Nano over UNO as it is cheaper, breadboard friendly, small in size and has couple of more pins (digital and analog IO) than UNO.
   
![Arduino-Nano-Board-Layout](https://user-images.githubusercontent.com/90204263/200175619-2134e8fa-72eb-42af-8d61-b976de826687.jpg)
# RTC(REAL TIME CLOCK) DS3231
The DS3231 is a low-cost, highly accurate Real Time Clock which can maintain hours, minutes and seconds, as well as, day, month and year information. Also, it has automatic compensation for leap-years and for months with fewer than 31 days.    
DS3231 Real Time Clock Specifications
The module can work on either 3.3 or 5 V which makes it suitable for many development platforms or microcontrollers. The battery input is 3V and a typical CR2032 3V battery can power the module and maintain the information for more than a year.The module uses the I2C Communication Protocol which makes the connection to the Arduino Board very easy.
![rtc](https://user-images.githubusercontent.com/90204263/200175940-f31a9b82-5286-4a70-8169-4717010c2600.png)    
![DS3231 RTC-Module-Interfacing-Circuit](https://user-images.githubusercontent.com/90204263/200177205-aed7e6d0-9322-4fcc-bfa6-dd8294ee2688.png)

As shown in circuit diagram the module is connected to +5V power supply. The module can work on +5V regulated power and higher voltage may damage the module. The I2C interface is established as shown in figure. All you need to do is connect SDA of module to SDA of controller and SCL is connected to SCL of controller or you can also use A4(Analog pins) for SDA and A5 for SCL pins.

The communication between controller and module is really complex. Usually the information is sent or received byte to byte. So using libraries which are written for the module DS3231 is ideal. Using libraries makes the communication easy. All you need to do is download these libraries and call them in programs. Once the header file is included, the controller performs the communication by itself and provides the date and time for you. The alarm clock can also be set or changed easily using libraries.

 And when the power goes down, the RTC module chip draws the power from battery source connected to it automatically. So the time will be up to date. And when the system restarts the controller can get the real time from module without error.
# 5V Relay
  A 5v relay is an automatic switch that is commonly used in an automatic control circuit and to control a high-current using a low-current signal. The input voltage of the relay signal ranges from 0 to 5V.
  Normally Open (NO): This pin is normally open unless we provide a signal to the relay modules signal pin. So, the common contact pin smashes its link through the NC pin to make a connection through the NO pin.
![Relay pins_config](https://user-images.githubusercontent.com/90204263/200178506-502ee967-8df7-4f62-8c33-9e996f0efdbc.jpg)


Common Contact: This pin is used to connect through the load that we desire to switch by using the module.

Normally Closed (NC): This NC pin is connected through the COM pin to form a closed circuit. However, this NC connection will break once the relay is switched through providing an active high/low signal toward the signal pin from a microcontroller.

Signal Pin: The signal pin is mainly used for controlling the relay. This pin works in two cases like active low otherwise active high. So, in active low case, the relay activates once we provide an active low signal toward the signal pin, whereas, in an active high case, the relay will trigger once we provide a high signal toward the signal pin.

However, these modules generally work on an active high signal which will strengthen the relay coil to make contact with the common terminal with the normally open terminal.

5V VCC: This pin needs 5V DC to work. So 5V DC power supply is provided to this pin.

Ground: This pin connects the GND terminal of the power supply.
# Circuit Diagram
![Nano_Circuit](https://user-images.githubusercontent.com/90204263/200178623-41ef6f28-046e-45f5-beed-ccb4d06dd0e4.jpg)
# Initialise and set the Time in RTC
  After completing the circuit as same as above,then you need to first initialise and set the Time in RTC module,for that you need to include RTC library in our code,there are N number of libraries availabel for RTC,but i choosed the RTC DS3231 library by ADAFRUIT,which is comfortable for me,you can also go with it.
