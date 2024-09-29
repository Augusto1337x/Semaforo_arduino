int led_vm1 = 1,led_vd1 = 3,led_am1 = 2;

 void setup (){
  pinMode(led_vm1,OUTPUT); // SAIDA DO LED 
  pinMode(led_vd1,OUTPUT); // SAIDA DO LED 
  pinMode(led_am1,OUTPUT); // SAIDA DO LED 
 }

void loop() {
  digitalWrite(led_am1,LOW);   // acendendo led
  digitalWrite(led_vd1,LOW);
  digitalWrite(led_vm1,HIGH);
  delay(1000); // pausa do led ligado 

  digitalWrite(led_am1,LOW);   // acendendo led
  digitalWrite(led_vd1,LOW);
  digitalWrite(led_vm1,HIGH);
  delay(1000); // pausa do led ligado 

  digitalWrite(led_am1,LOW);   // acendendo led
  digitalWrite(led_vd1,LOW);
  digitalWrite(led_vm1,HIGH);
  delay(1000); // pausa do led ligado

  digitalWrite(led_am1,LOW);   // acendendo led
  digitalWrite(led_vd1,LOW);
  digitalWrite(led_vm1,HIGH);
  delay(1000); // pausa do led ligado 

  digitalWrite(led_am1,LOW);   // acendendo led
  digitalWrite(led_vd1,LOW);
  digitalWrite(led_vm1,HIGH);
  delay(1000); // pausa do led ligado 

  digitalWrite(led_am1,LOW);   // acendendo led
  digitalWrite(led_vd1,HIGH);
  digitalWrite(led_vm1,LOW);
  delay(1000); // pausa do led ligado 

  digitalWrite(led_am1,LOW);   // acendendo led
  digitalWrite(led_vd1,HIGH);
  digitalWrite(led_vm1,LOW);
  delay(1000); // pausa do led ligado 

  digitalWrite(led_am1,LOW);   // acendendo led
  digitalWrite(led_vd1,HIGH);
  digitalWrite(led_vm1,LOW);
  delay(1000); // pausa do led ligado 

  digitalWrite(led_am1,HIGH);   // acendendo led
  digitalWrite(led_vd1,LOW);
  digitalWrite(led_vm1,LOW);
  delay(1000); // pausa do led ligado 

  
  digitalWrite(led_am1,HIGH);   // acendendo led
  digitalWrite(led_vd1,LOW);
  digitalWrite(led_vm1,LOW);
  delay(1000); // pausa do led ligado 
}