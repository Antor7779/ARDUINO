int redPin=A5;
int bright=255;
void setup() {
  // put your setup code here, to run once:
pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin,bright);
delay(bright);
analogWrite(redPin,LOW);
delay(bright);
}
