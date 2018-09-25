const int buttonpin = 17;
int ledpins[] = {2,4,16,25,21,22,27,26};
int pincount = 8;
int buttonstate = 0;
int lightpin = 0;
int flag = 0;
void setup() {
  pinMode(17,INPUT);

  for(int thispin = 0;thispin < pincount;thispin++){
      pinMode(ledpins[thispin],OUTPUT);
  }
  for(int thispin = 0;thispin < pincount;thispin++){
       digitalWrite(ledpins[thispin],LOW);
      delay(200);
  }
}

void loop() {
  buttonstate =digitalRead(buttonpin);

  if(buttonstate == HIGH&&flag == 0)
  {
    digitalWrite(ledpins[lightpin],HIGH);
    lightpin++;
    delay(200);
    if(lightpin == 8)
    {
      flag = 1;
    }
  }
  if(buttonstate == HIGH&&flag == 1)
  {
    digitalWrite(ledpins[lightpin],LOW);
    lightpin--;
    delay(200);
    if(lightpin == (-1))
    {
      flag = 0;
      lightpin = 0;
    }
  }
}
