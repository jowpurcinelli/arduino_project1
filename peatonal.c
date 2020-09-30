int led_verde_auto = 10;
int led_amarillo_auto = 9;
int led_rojo_auto = 8;

int led_verde_peaton = 2;
int led_rojo_peaton = 3;


const int boton = 13; 

int state = 0; 

void setup() {

  pinMode(led_verde_auto, OUTPUT);
  pinMode(led_amarillo_auto, OUTPUT);
  pinMode(led_rojo_auto, OUTPUT);
  
  pinMode(led_rojo_peaton, OUTPUT);
  pinMode(led_verde_peaton, OUTPUT);
  
  pinMode(boton,INPUT_PULLUP);
}

void loop(){

  state = digitalRead (boton);
  
  digitalWrite(led_verde_auto,HIGH);  
  digitalWrite(led_amarillo_auto,LOW); 
  digitalWrite(led_rojo_auto,LOW);
  digitalWrite(led_rojo_peaton, HIGH);
  digitalWrite(led_verde_peaton, LOW);
  
  if (state == HIGH){
    delay(3000);
    digitalWrite(led_verde_auto,LOW); 
	digitalWrite(led_amarillo_auto,HIGH); 
	delay(2000); 
	digitalWrite(led_amarillo_auto,LOW); 
	digitalWrite(led_rojo_auto,HIGH); 
    delay(2000);
    digitalWrite(led_rojo_peaton, LOW);
    digitalWrite(led_verde_peaton, HIGH);
	delay(8000);
	digitalWrite(led_rojo_auto,LOW); 
  } else {
    digitalWrite(led_verde_auto, HIGH);
    
}

}
