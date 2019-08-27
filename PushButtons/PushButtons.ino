const int leftPin = 2;
const int rightPin = 4;

int leftState = 0;
int rightState = 0;

void setup() 
{
  Serial.begin(9600);

  pinMode(leftPin, INPUT);
  pinMode(rightPin, INPUT);
}

void loop() 
{
  leftState = digitalRead(leftPin);
  rightState = digitalRead(rightPin);

  int output = 0;

  if(rightState == HIGH)
  {
    output += 1;
  }
  
  if(leftState == HIGH)
  {
    output += 2;
  }

  if(output > 0)
  {
    Serial.println(String(output));
  }
  
  delay(100);
}

