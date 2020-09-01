char input;
void setup() {
  // put your setup code here, to run once:

 pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
 
 // put your main code here, to run repeatedly:

if (Serial.available())
{
    input = Serial.read();
    digitalWrite(LED_BUILTIN,HIGH);   // turn the LED ON 
    delay(input);
    digitalWrite(LED_BUILTIN,LOW);   // turn the LED OFF 
    delay(input);
}
}
