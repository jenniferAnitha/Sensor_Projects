

/*#define trigPin 13 //pin 13 as Trig pin

#define echoPin 12 //pin 12 as echo pin

#define led 11 //pin 11 as Led output*/
// defines pins number
const int trigPin=13;
const int echoPin=12;
const int led=11;

void setup()

{ 
Serial.begin (9600);// starts the serial communication

pinMode(trigPin, OUTPUT);//sets the trig pin as an output

pinMode(echoPin, INPUT);//sets the echo pin as output

pinMode(led, OUTPUT);

}

void loop()

{ 
  long duration, distance;// define variables

digitalWrite(trigPin, LOW);

delayMicroseconds(2);
//Sets the trigPin on high state for 10 micro seconds

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);
//Reads the echoPin, returns the sound wave travel time in microseconds

duration = pulseIn(echoPin, HIGH);
//calculate the distance
distance = duration * 0.034/2;

if (distance <= 10)

{ 
  digitalWrite(led,HIGH);

}

else {

digitalWrite(led,LOW);

}

//prints the distance in serial monitor

Serial.print("Distance : ");

Serial.println(distance);

delay(300);

}
