 char input;
 int blinky=false;
 
void setup() {
  // put your setup code here, to run once:

 pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
 
 // put your main code here, to run repeatedly:

if (Serial.available())
{
   input= Serial.read();
 
  if(input=="1")
  {
    blinky=!blinky;
    digitalWrite(LED_BUILTIN,blinky); //LED ON or OFF
   
     }
}
}
