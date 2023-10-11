

#include <Arduino.h>

#include "extras/PwmPin.h"                         

extern int change = 0;


struct DEV_LED : Service::LightBulb {              

  int ledPin;                                       
  SpanCharacteristic *power;                        
  
  DEV_LED(int ledPin) : Service::LightBulb(){       

    power=new Characteristic::On();                 
    this->ledPin=ledPin;                            
    pinMode(ledPin,OUTPUT);                         
    
  } 

  boolean update(){                              

    digitalWrite(ledPin,power->getNewVal());      
   
    return(true);                               
  
  } 
};

struct DEV_DimmableLED : Service::LightBulb {       

  LedPin *ledPin;                                   
  SpanCharacteristic *power;                        
  SpanCharacteristic *level;                       
  DEV_DimmableLED(int pin) : Service::LightBulb(){      

    power=new Characteristic::On();                                    

    //this->ledPin=new LedPin(pin);                  this is used for dimmable leds to use pwm
    
  } 

  boolean update() {
    change = 1;
    return true;
  } // update
};

//////////////////////////////////

