const int flexPin = A0; // Flex sensor analog pin ; defines constant integer flexPin 
int flexValue; // defines flex value - stores value read from flex sensor ,

void setup() {
  // Initialize serial port
  Serial.begin(9600); // serial communication protocol because of the variable resistance (bits per second). baud rate: bits per second
}

void loop() {
  // Read flex sensor value ; this value can be scaled in max to change parameters
  flexValue = analogRead(flexPin);
  
  // Print the flex sensor value to the Serial Monitor
  Serial.print("Flex Sensor Value: ");
  Serial.println(flexValue);

  delay(100); // Short delay before the next loop
}