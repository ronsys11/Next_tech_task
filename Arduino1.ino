#include <Keypad.h>
#include <Wire.h> 






long first = 0;
long second = 0;
double total = 0;

char customKey;
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'Z','0','#','D'}
};
byte rowPins[ROWS] = {7,6,5,4}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {3,2,1,0}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS); 
void setup()
{
   pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
  


}


void loop()
{

  customKey = customKeypad.getKey();
  switch(customKey) 
  {
  case '0' ... '9': // This keeps collecting the first value until a operator is pressed "+-*/"
   
    first = first * 10 + (customKey - '0');
   
    break;

 

  case 'A':
   
    
    
    
   
   

   

   
    analogWrite(10,first);
    
    
    break;

  case 'Z':
    total = 0;
     analogWrite(10,0);
    break;
  }
}


