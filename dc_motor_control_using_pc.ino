void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(11,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
  int serial_data= Serial.read();
  Serial.println(serial_data);
  int x=serial_data;
  if(x==1){
    digitalWrite(13,HIGH);
    digitalWrite(10,LOW);
  }
  // put your main code here, to run repeatedly:
  if(x==0){
    digitalWrite(10,HIGH);
    digitalWrite(13,LOW);
  }
  // put your main code here, to run repeatedly:

}
