//   Oct 13th   Paul J. Gitschner 
//   Autonomous Auto Project for  Coursera UO Illinois IOT  course 1 

// Motor 1    Left side,pointing fwd,   Out 3 black wire, Out 4 White wire 
// black top terminal white bottom terminal, terminals on outside

#define enB 9 //yellow enable
#define in3 7  //green b fwd
#define in4 6 //blue  b rev

// Motor 2    Right side,pointing fwd,   Out 1 grey wire, Out 2 Purple wire 
// Grey top terminal Purple bottom terminal, terminals on outside

#define enA 10 //white enableA
#define in1 4  //orange a fwd
#define in2 5 //grey  a rev



void setup() {
  pinMode(in3, OUTPUT);  //green  fwd
  pinMode(in4, OUTPUT);  //blue  rev
  pinMode(enB, OUTPUT); //yellow  en
  
//Motor 2
  pinMode(in1, OUTPUT);  //orang  fwd
  pinMode(in2, OUTPUT);  //grey  rev
  pinMode(enA, OUTPUT); //white  e
  
   }
  

void loop() {

  analogWrite(enB, 255); // Send PWM signal to L298N Enable pin
  analogWrite(enA, 255); // Send PWM signal to L298N Enable pin

//  fwd();
//  stopall();
 // rev();
 // stopall();
//  right();
 // stopall();
//  left();
 // stopall();
 // delay(5000);




 fwd();
 right();
 fwd();
 right();
 fwd();
 right();
 fwd();
 right();
 delay(5000);


}

void fwd() {
//motor 1  and 2 forwards
 digitalWrite(in3, HIGH);
 digitalWrite(in4, LOW);

 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 delay (1000);  
}
 
void stopall(){ 
// stop both
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay (1000);  
}

void rev(){
 
//motor 1  and 2 backwards
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);

 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 delay (300); 
}


void right() {


 digitalWrite(in3, HIGH);
 digitalWrite(in4, LOW);

 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 delay (300);  

 
// stop both
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);

digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
delay (1000); 
}

void left() { 


//motor 1 Turn LEFT 
//motor 1  and 2 forwards
 digitalWrite(in4, HIGH);
 digitalWrite(in3, LOW);

 digitalWrite(in2, LOW);
 digitalWrite(in1, HIGH);
 delay (1300);  
 
// stop both
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);

digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
delay (1000);  
}




 
