const int buttonPin = 4;     
const int ledPin =  3;
int buttonState = 0;
bool flag = true;

void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(buttonPin, INPUT);   
}

void loop(){
  buttonState = digitalRead(buttonPin); //Read button state
  if (buttonState == LOW) { 
    //turn led on!
    if (flag == true)
    {
      digitalWrite(ledPin, HIGH);
      flag = false; //change flag variable
    }
    //turn led off!
    else if (flag == false)
    {
      digitalWrite(ledPin, LOW);
      flag = true; //change flag variable again 
    }
  }
  delay(200);
}