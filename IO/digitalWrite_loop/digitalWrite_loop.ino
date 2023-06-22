//Define Constants:
const int pins[]={2,3,4,5,6}; //Array of pins being utilized
const int delayShort = 10;    //Short delay in milliseconds
const int delayLong = 20;     //Long delay in milliseconds
const int pinCount = 5;       //Number of pins being utilized (size of pins)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println();
  Serial.print("******************");
  Serial.println();
  Serial.print("Digital Write Loop");
  Serial.println();
  Serial.print("==================");
  Serial.println();

  //Initial setup of board
  //Set pin mode to output
  for(int i=0; i<pinCount; i++){
      pinMode(pins[i],OUTPUT);
      }
    }

void loop() {
  // put your main code here, to run repeatedly:

  //Set all pins to low.  
  //Apply a short delay before setting the next pin
     
  for(int i=0; i<pinCount; i++){
      digitalWrite(pins[i],LOW);
      delay(delayShort);
      }        

    //Apply a long delay before setting pins high
    delay(delayLong);

  //Set all pins to high
  //Apply a short delay before setting the next pin
  for(int i=0; i<pinCount; i++){
      digitalWrite(pins[i],HIGH);
      delay(delayShort);
    }
}
