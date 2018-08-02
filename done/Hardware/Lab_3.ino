#define D0 16
#define D2 4
#define buttonPin D2
#define ledPin D0

void setup()
{
Serial.begin(115200); // initialize serial:
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT_PULLUP);
attachInterrupt(buttonPin, EXTI2_ISR, CHANGE);
}
void loop()
{
delay(250);
}
void EXTI2_ISR()
{
digitalWrite(ledPin,!digitalRead(ledPin));
Serial.println("Interrupt from pin D2");
}
