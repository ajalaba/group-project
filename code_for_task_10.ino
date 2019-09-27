int led=13; // led pin
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(led, OUTPUT);//setting led as output
}

void loop() {
  // put your main code here, to run repeatedly:

  //Sensor 1
  if (digitalRead(6) == HIGH) {
    Serial.println("Motion Detected in Sensor 1");
    digitalWrite(13, HIGH);
    delay(10000);
  }
  if (digitalRead(5) == HIGH) {
    Serial.println("Motion Detected in Sensor 2");
    digitalWrite(13, HIGH);
    delay(10000);
  }
  else {
    Serial.println("Inactive");
    digitalWrite(13, LOW);
  }
    delay(1000);

}


 
