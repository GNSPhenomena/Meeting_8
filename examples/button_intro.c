const int buttonPin = 4;
const int ledPin =  3;

int buttonState = 0;  // variable for reading the pushbutton status

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  
  buttonState = digitalRead(buttonPin); // read the state
  // check if the pushbutton is pressed.
  if (buttonState == 0)
  {
    digitalWrite(ledPin, HIGH); // turn LED on
  }
  else //not pressed
  {
    digitalWrite(ledPin, LOW);  // turn LED off:
  }
}