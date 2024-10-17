const int trigPin = 9;
const int echoPin = 10;
const int buttonPin = 2;

float duration, distance;
int buttonState;

void setup() {
  // Setup pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  
  // Initialize serial port
  Serial.begin(9600);
}

void loop() {
  // Stop Pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Send a 10 microsecond pulse to trigPin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin pulse width in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance based on the speed of sound
  distance = (duration * 0.0343) / 2;

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);

  // Read button state
  buttonState = digitalRead(buttonPin);

  // Print the button state to the Serial Monitor
  Serial.print("Button State: ");
  Serial.println(buttonState);

  delay(100);
}
