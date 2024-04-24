int LED = 11;
int led = 10;

void setup() {
  pinMode(LED,OUTPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  for (int i=0;i<=255;i++)
  {
    analogWrite(LED,i);
    delay(1);
  }
   for (int i=255;i>=0;i--)
  {
    analogWrite(LED,i);
    delay(1);
  }
   for (int i=0;i<=255;i++)
  {
    analogWrite(led,i);
    delay(1);
  }
   for (int i=255;i>=0;i--)
  {
    analogWrite(led,i);
    delay(1);
  }
}