int led=3;
int btn=4;
int btnStatus=0;
int temp;
int val;
int analog=A0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(analog,INPUT);
  pinMode(btn,INPUT);
  Serial.begin(9600);

}

void loop() {

  btnStatus=digitalRead(btn);
  
  val=analogRead(analog);
  temp = val * 0.48828125;
  //vol=(temp*5)/1024;
  //int tempC=(vol-5)*100;

  Serial.println(temp);
  delay(200);
  if(temp>10){
    if(btnStatus==HIGH){

      digitalWrite(led,HIGH);
      delay(200);
      digitalWrite(led,LOW);
      delay(200);
      }
    }

}
