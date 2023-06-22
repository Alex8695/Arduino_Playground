
int pins[]={2,3,4,5,6};
int delayShort = 10;
int delayLong = 20;
int pinCount = 5;

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

  for(int i=0; i<pinCount; i++){
      pinMode(pins[i],OUTPUT);
      }
    }

void loop() {
  // put your main code here, to run repeatedly:

  for(int i=0; i<pinCount; i++){
      digitalWrite(pins[i],LOW);
      delay(delayShort);
      }          
    delay(delayLong);
  
  for(int i=0; i<pinCount; i++){
      digitalWrite(pins[i],HIGH);
      delay(delayShort);
    }
}
