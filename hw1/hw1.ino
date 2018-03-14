const byte led[]={5,4,13,12,11,10,9,8};

void setup() {

for (byte i = 0; i<= 7; i++) {
pinMode(led[i], OUTPUT);
}
}
//byte lightPin = startPin;

void loop()
{
byte i;



for(i=0;i<=7;i++)
{
  digitalWrite(led[i], HIGH);
  delay (200);
  digitalWrite(led[i], LOW);
  delay (200);
}
  for(i=7;i>0;i--)
{
  digitalWrite(led[i], HIGH);
  delay (200);
  digitalWrite(led[i], LOW);
  delay (200);
}
}

