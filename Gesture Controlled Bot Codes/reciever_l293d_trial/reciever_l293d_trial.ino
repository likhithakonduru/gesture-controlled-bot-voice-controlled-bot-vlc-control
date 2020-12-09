// RECIEVER CODE

//NOTE :- THIS CODE IS USED WHEN CONTROLLING THE ROBOT VIA THE BREADBORD REMOTE

#include <VirtualWire.h>
class motor{
  public:
  int in1,in2;
  motor(int a,int b){
    in1 = a; in2 =b;    
  }
  void drive(int a,int b){
    analogWrite(in1,a);
    analogWrite(in2,b);
  }
};

motor moto1(3,7),moto2(4,5);

void setup()
{     
     pinMode(7,OUTPUT);
     pinMode(3,OUTPUT);
     pinMode(4,OUTPUT);
     pinMode(5,OUTPUT);
      Serial.begin(38400);  // Debugging only
      Serial.println("setup");
      pinMode(13, OUTPUT);
      // Initialise the IO and ISR
      vw_setup(2000);  // Bits per sec
      vw_set_rx_pin(2);    //Rx Data pin to Digital  Pin 2
      vw_rx_start();       // Start the receiver PLL running
}//close setup

void loop()
{
    uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;

    if(vw_get_message(buf, &buflen)) // Non-blocking
    {
       int i;
       Serial.print("hello");
        Serial.print(buf[0]);
        digitalWrite(13, true); // Flash a light to show received good message
        // Message with a good checksum received, dump it.
        for (i = 0; i < buflen; i++)
        {
                  Serial.print(buf[i]);//print received command
                if(buf[i] == '1')//if button 1 is pressed.... i.e.forward buton
                {
                   moto1.drive(255,0);moto2.drive(255,0);
                   Serial.println(" = forward");
                }
                if(buf[i] == '2')//if button 2 is pressed.... i.e.back buton
                {
                  moto1.drive(0,255);moto2.drive(0,255); 
                  Serial.println(" = backward");
                }
                if(buf[i] == '3')//if button 3 is pressed.... i.e.left buton
                {
                  moto1.drive(255,0);moto2.drive(0,0); 
                  Serial.println(" = left");
                }
                if(buf[i] == '4')//if button 4 is pressed.... i.e.left buton
                {
                  moto1.drive(0,0);moto2.drive(255,0);
                  Serial.println(" = right");
                }
                delay(1000);
                
         }
            /* Serial.print(" ");
          }
          Serial.println("");*/
          digitalWrite(13, false);
   }//close if
}//close loop
