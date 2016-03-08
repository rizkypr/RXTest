
int ch1; // Here's where we'll keep our channel values
int ch2;

int blue = 8;
int white = 9;
int red = 10;
int green = 11;

void setup() {

  pinMode(5, INPUT); // Set our input pins as such
  pinMode(6, INPUT);
  
  pinMode(blue, OUTPUT);    
  pinMode(white, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
Serial.begin(9600); // Pour a bowl of Serial
}

void loop() {

  ch1 = pulseIn(5, HIGH, 25000); // Read the pulse width of 
  ch2 = pulseIn(6, HIGH, 25000); // each channel

  delay(100); 
              
  if(ch1<1400)
  { 
    if(ch2>1600)
    {
      digitalWrite(white, LOW);    // turn the LED off by making the voltage LOW  
    }
    digitalWrite(green, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(200);               // wait for a second
    digitalWrite(green, LOW);    // turn the LED off by making the voltage LOW  
  }
  else if(ch1>1500)
  {  
    digitalWrite(white, LOW);    // turn the LED off by making the voltage LOW  
    digitalWrite(red, LOW);    // turn the LED off by making the voltage LOW}
    digitalWrite(blue, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(200);               // wait for a second
    digitalWrite(blue, LOW);    // turn the LED off by making the voltage LOW}
  }
  
   if(ch2<1400)
  { 
    digitalWrite(red, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(200);               // wait for a second
    digitalWrite(white, LOW);    // turn the LED off by making the voltage LOW  
  }
  else if(ch2>1650)
  {  
    digitalWrite(white, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(200);               // wait for a second
    digitalWrite(red, LOW);    // turn the LED off by making the voltage LOW}
  } 
  else 
  {
    digitalWrite(red, LOW);    // turn the LED off by making the voltage LOW}
    digitalWrite(white, LOW);    // turn the LED off by making the voltage LOW 
  }
  
    Serial.print("Channel 1:"); // Print the value of 
  Serial.println(ch1);        // each channel

  Serial.print("Channel 2:");
  Serial.println(ch2);
  delay(100);
}
