int potPin=A1;
int ledPin=12;
int threshold=500;
void setup() {
  pinMode(potPin , INPUT);
  pinMode(ledPin , OUTPUT);
  Serial.begin(9600);
  delay(1000);

}

void loop() {
  int potenValue = analogRead(potPin);
  if(potenValue > threshold){
    Serial.println("Warning Threshold value Exceeded !");
    Serial.println(potenValue);
    digitalWrite(ledPin , HIGH);
  }
  else{
    Serial.println("Threshold Maintained..!");
    Serial.println(potenValue);
    digitalWrite(ledPin , LOW);
  }
  delay(1000);

}
