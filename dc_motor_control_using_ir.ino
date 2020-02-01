void setup() {
  
  Serial.begin(9600);
  pinMode(11,INPUT);
  pinMode(13,OUTPUT);
  pinMode(10,OUTPUT);
  // put your setup code here, to run once:
}

void loop() { 
  int IR_state = digitalRead(11);
  Serial.println(IR_state);
  int x=IR_state;
  if(x==1){
    digitalWrite(13,HIGH);
    digitalWrite(10,LOW);
  }
  // put your main code here, to run repeatedly:
  if(x==0){
    digitalWrite(10,HIGH);
    digitalWrite(13,LOW);
  }
}
