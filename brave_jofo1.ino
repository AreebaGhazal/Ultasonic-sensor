// C++ code
//
	int echoPin = 2;
  	int trigPin = 3;
    int redled =  5;
    int greenled =6;

	float duration;
	float distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  // clear the tripin condition 
  digitalWrite(trigPin, LOW);
  delay(100);
  
  // sets the tripin HIGH (ACTIVE) for 10microseconds
  digitalWrite(trigPin, HIGH);
  delay(100);
  
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  // calculating the distance
  distance = (duration * 0.034) / 2;
  
  Serial.print("distance: ");
  Serial.print(distance);
  Serial.println("cm");
  
  if (distance <= 20.0) 
  {
  digitalWrite(greenled,LOW);
  digitalWrite(redled ,HIGH);
  delay (1000);
  }
}
