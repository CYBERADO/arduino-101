#define LED 12
#define LED 10
#define LED 13
#define LED 8
#define LED 7
#define LED 9
#define LED_1_PIN 2
#define BUTTON_PIN 4
#define LED 11
#define LED 6


void setup() {
   pinMode(LED_1_PIN,OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(10,OUTPUT); 
  pinMode(8,OUTPUT); // put your setup code here, to run once:
   pinMode(7,OUTPUT); 
    pinMode(9,OUTPUT); 
     pinMode(11,OUTPUT); 
      pinMode(6,OUTPUT); 

}

void loop() {
 
digitalWrite(8,HIGH);  // put your main code here, to run repeatedly:
delay(100);
digitalWrite(8,LOW);
delay(100);
digitalWrite(12,HIGH);  // put your main code here, to run repeatedly:
delay(100);
digitalWrite(12,LOW);
delay(100);
digitalWrite(10,HIGH);  // put your main code here, to run repeatedly:
delay(100);
digitalWrite(10,LOW);
delay(100);
digitalWrite(13,HIGH);  // put your main code here, to run repeatedly:
delay(100);
digitalWrite(13,LOW);
delay(100);
digitalWrite(7,HIGH);  // put your main code here, to run repeatedly:
delay(100);
digitalWrite(7,LOW);
delay(100);
digitalWrite(9,HIGH);  // put your main code here, to run repeatedly:
delay(100);
digitalWrite(9,LOW);
delay(100);
digitalWrite(11,HIGH);  // put your main code here, to run repeatedly:
delay(100);
digitalWrite(11,LOW);
delay(100);
digitalWrite(6,HIGH);  // put your main code here, to run repeatedly:
delay(100);
digitalWrite(6,LOW);
delay(100);
  byte buttonState=digitalRead(BUTTON_PIN);
  if(buttonState==LOW){
    digitalWrite(LED_1_PIN,HIGH);

  } else {
    digitalWrite(LED_1_PIN,LOW);
  }
}
