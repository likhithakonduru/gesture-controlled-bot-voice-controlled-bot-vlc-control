// Add SoftwareSerial.h library  
#include<>
// Add String.h library to code
#include<>
// Create serial port and initialize using  to 2,3 port RX,TX

// initialize a string to store data named "input"

// initialize a char to store temporary data named "com"
 
// create a class named motor with two output pins and function to drive motors
class motor{
  public:
  // create two integers for outputs
  
  // create a constructor to initialise output pins  
  motor(int a,int b){
        // create two analogWrite 
  }

  // create a function to drive the motor 
  void drive(int a,int b){
  //  create a write function for both pins use pwm pins (11,10) (8,9)
  
  }
};

// create two obecjets of class motor named moto1 and moto2 use constructor
// to pass pin numbers, the pwm pins will be helpful to change speed (3,5,6,9,10,11) 
motor moto1(),moto2();

void setup() {
  // Begin Serial communication
  
  // Check if serial communication works by printing a string on serial monitor
  
  // Start bluetooth port by setting baud rate to 38400
  
  // check if the bluetooth communication works. print a string on bluetooth monitor
  
  // initialise 4 output pins to control the motors use pinMode function to initialise
  
}

void loop() {
  
  if()  //Check if the bluetooth has recieved any string,using "object.available" function
   {       
    ="";     // initialise the string to empty string
    while()  // Now use a condition to check availability if char is available at input 
    {        
       // use "object.read" to read char value from input and store it's value in char variable
       
       // print the newly aquired character to serial port to check
       
       // now concatenate the char to the string to make a complete string 
       
    }   
    // Now print the string to serial port to check control signals from external bluetooth device.

   // you can notice every word starts with "*" and ends with "#"
   }
  
  else{ 
    Serial.println(input);
    // write condition to check if string is "*forward#"  
    if(()=="*forward#")
    //  Now we need to drive both motors in clockWise direction
    { moto1.drive(255,0);moto2.drive(255,0);}
    
    // write condition to check if string is "*left#" 
    else if(()=="")
    //second case "left" : now we need to drive right motor in clockWise direction and turn off left motor     
    { moto1.drive();moto2.drive();}
    
    // write condition to check if string is "*right#"
    else if()
    // case "right" : now we need to drive left motor in clockWise direction and turn off right motor
    {;}
    
    // write condition for reverse motion
    elseq if()
    // backword motion will have both motors rotating in anticlockWise direction
    {;}
   
   // lets move bot slowly in forward direction
   else if()
   // case "slow" : now we need to rotate both motors in forward directions but at low speed than normal
   {;}

    // last condition to check if string is stop
   else if()
    // case "stop" : now we need to stop both motors
   {;}
  }
}
