#define D0 16
#define LED D0

void setup() {
pinMode(LED,OUTPUT);

}

void loop() {
 for (int i = 0; i < 3; i++) {
digitalWrite(LED,HIGH); // Pin D0 is HIGH
delay(1000);
digitalWrite(LED,LOW); // Pin D0 is LOW
delay(1000);
  }

 for (int i = 0; i < 3; i++) {
digitalWrite(LED,HIGH); // Pin D0 is HIGH
delay(500);
digitalWrite(LED,LOW); // Pin D0 is LOW
delay(500);
  }

}
