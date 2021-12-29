
// Oct 16th    Paul J. Gitschner 
//   Autonomous Auto Project for  Coursera UO Illinois IOT  course 1 


#define enB 9 // yellow enable
#define in3 7  //green b fwd
#define in4 6 //blue  b rev
#define enA 10 //white enableA
#define in1 4  //orange a fwd
#define in2 5 //grey  a rev
#define echoPin 2 // attached pin D2 Arduino to Echo Orange
#define trigPin 3 //attached pin D3 Arduino to  Trig Blue

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

void setup() {
  pinMode(in3, OUTPUT);  //green  fwd
  pinMode(in4, OUTPUT);  //blue  rev
  pinMode(enB, OUTPUT); //yellow  en
  
  pinMode(in1, OUTPUT);  //orang  fwd
  pinMode(in2, OUTPUT);  //grey  rev
  pinMode(enA, OUTPUT); //white  e
  
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  
  Serial.begin(9600); 
  
//  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
 // Serial.println("with Arduino UNO R3");
}


void loop() {
  analogWrite(enB, 255); // Send PWM signal to L298N Enable pin
  analogWrite(enA, 255); // Send PWM signal to L298N Enable pin

  
  
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  
  duration = pulseIn(echoPin, HIGH);
  
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  
  // Displays the distance on the Serial Monitor
 // Serial.print("Distance: ");
//  Serial.print(distance);
 // Serial.println(" cm");

  if (distance > 20){
    Serial.println("high distance");
    //motor 1  and 2 forwards
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  } else{
    Serial.println("Low xxxxxxxxxxxxxxxxxxxxxxxxxDISTANCE");
    //Car Turn RIGHT 
    //motor 2  bkward and 1 forwards
    digitalWrite(in4, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in1, HIGH);
 
    
  }
  }
    
 
 
       
 
