#define D2 4 // Map NodeMCU to ESP8266 pin
#define button D2
#define pressed HIGH
#define D0 16
#define LED D0
void setup()
{
pinMode(button,INPUT_PULLUP);
pinMode(LED,OUTPUT);

}
void loop()
{
bool ReadSwitch = digitalRead(button);
if(ReadSwitch == pressed)
{
digitalWrite(LED,HIGH);
 }
 else {
    digitalWrite(LED,LOW);
  }
}
