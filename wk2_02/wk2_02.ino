int freq = 5000;
int ledChannel = 12;
int resolution = 8;
int potpin = 36;
int val = 0;
 
void setup() {
  
   Serial.begin(9600);
  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(LED_BUILTIN, ledChannel);
 
}
 
void loop() {
 
  val = analogRead(potpin);
  Serial.println(val);
  val = val/16;
  ledcWrite(ledChannel,val);
  delay(10);
 
}
