
int longW=2000;

String nm="Antor";
float pi=3.14;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH);
  delay(300);
  digitalWrite(8,LOW);
  delay(200);

  delay(1000);

  digitalWrite(11,HIGH);
  delay(300);
  digitalWrite(11,LOW);
  delay(100);

  delay(1000);

  digitalWrite(11,HIGH);
  delay(300);
  digitalWrite(11,LOW);
  delay(100);

  delay(1000);

  digitalWrite(11,HIGH);
  delay(300);
  digitalWrite(11,LOW);
  delay(100);

  delay(1000);
//morse code

//...
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);

  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);

  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);



delay(longW);

  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  delay(400);

digitalWrite(5,HIGH);
  delay(900);
  digitalWrite(5,LOW);
  delay(100);

  
}
