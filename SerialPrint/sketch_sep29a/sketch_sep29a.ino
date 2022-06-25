int j=1;
int waiT=750;




void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(j);
  j=j+1;
  delay(waiT);
}
