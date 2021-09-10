//define used components (libraries) accompany by input pins
#define M1 8
#define M2 9
#define EN 10
#define key 11
#define Blueled 13
//declaring used variable
int POT_VAL;
 
void setup() {
  Serial.begin(9600);
  pinMode(Blueled,OUTPUT);
  pinMode(EN,OUTPUT);
  pinMode(M1,OUTPUT);
  pinMode(M2,OUTPUT);
  pinMode(key,INPUT_PULLUP);
 
}
 
void loop() {
      byte switchstate = digitalRead(key);
//if the user switch the key rotate fold paper and turn led on       
      if(switchstate == HIGH){
        analogWrite(Blueled, 255);
        Serial.println("switch is ON now!!");
        analogWrite(EN,75);
        digitalWrite(M1,HIGH);
        digitalWrite(M2,LOW);
      }else{
        Serial.println("switch is OFF now!!");
        analogWrite(Blueled, 03);
        analogWrite(EN,0);
        analogWrite(Blueled,0);
      }
   
 
 
 
}
