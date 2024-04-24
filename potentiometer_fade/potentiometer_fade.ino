#define led_pin 11
#define pot_pin A1
#define led_pi 10
#define pot_pi A0

void setup() {
  pinMode(led_pin,OUTPUT);
  pinMode(led_pi,OUTPUT);
  Serial.begin(9600);
 
}

void loop() {
 int pot_value=analogRead(pot_pin);
 int pot_val=analogRead(pot_pi);
 int brightness=pot_value/4;
 int bright=pot_val/4;
 analogWrite(led_pin,brightness);
 analogWrite(led_pi,bright);

}
