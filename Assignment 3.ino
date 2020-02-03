void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
  int input=analogRead(A0);
  Serial.println(input);
  int x=input;
  if(x<512){
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
  }
  // put your main code here, to run repeatedly:
  if(x>512){
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  } 
  // put your main code here, to run repeatedly:

}
