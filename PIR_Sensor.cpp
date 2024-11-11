int pirPin=13;
int ledPin=11;
void setup() {
    pinMode(pirPin , INPUT);
    pinMode(ledPin , OUTPUT);
    Serial.begin(9600);

}

void loop() {
  int motionState=digitalRead(pirPin);
  if(motionState == HIGH){
    digitalWrite(ledPin , HIGH);
    Serial.println("Motion Detected !");
    delay(1000);
  }
  else{
    digitalWrite(ledPin , LOW);
    Serial.println("Motion Not Detected !");
  }

}
