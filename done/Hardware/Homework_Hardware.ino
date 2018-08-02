#define sensorPin  A0
#define redPin  0
#define greenPin  5
#define bluePin  4
#define buzzer  16
void setup() {
  Serial.begin(19200);
  
pinMode(buzzer,OUTPUT);

//**********RGB*******************
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}

void loop() {
     int sensorValue;
sensorValue = analogRead(sensorPin);
sensorValue = map(sensorValue, 0, 1023, 0, 100);
Serial.print("Soil moisture: ");
  Serial.print(sensorValue);
  Serial.println(" %");


if(sensorValue > 21  && sensorValue < 37){  
  setColor(0, 255, 0);//ความชื้นพอดี สีเขียว
  } 
  
    else if(sensorValue < 20 ){  
     setColor(0, 0, 255); //ความชื้นเกิน สีฟ้า ร้องเตีอนสั้นรั่วๆ
digitalWrite(buzzer , HIGH); // สร้างเสียงเตือน
delay(500); // 
digitalWrite(buzzer , LOW); 
delay(500);}
  
   else if(sensorValue > 38 ){  
  setColor(255, 0, 0);  //ความชื้นน้อยสีแดง ร้องเตีอนยาวรั่วๆ
digitalWrite(buzzer , HIGH); // สร้างเสียงเตือน
delay(3000); // 
digitalWrite(buzzer , LOW); 
delay(500); }

delay(500);


}


void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
