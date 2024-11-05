// Pin definitions
const int carRed = 25;
const int carYellow = 26;
const int carGreen = 27;
const int pedRed = 14;
const int pedGreen = 12;

void setup() {

// Set LED pins as output
pinMode(carRed, OUTPUT);
pinMode(carYellow, OUTPUT);
pinMode(carGreen, OUTPUT);
pinMode(pedRed, OUTPUT);
pinMode(pedGreen, OUTPUT);
// Initialize traffic light (green for cars, red for pedestrians)
digitalWrite(carGreen, HIGH);
digitalWrite(pedRed, HIGH);
}

void loop() {

// Step 1: Green light for cars, red for pedestrians
digitalWrite(carGreen, HIGH);
digitalWrite(carYellow, LOW);
digitalWrite(carRed, LOW);
digitalWrite(pedGreen, LOW);
digitalWrite(pedRed, HIGH);
delay(5000); // Cars move for 5 seconds
// Step 2: Yellow light for cars, red for pedestrians
digitalWrite(carGreen, LOW);
digitalWrite(carYellow, HIGH);
delay(2000); // Yellow light for 2 seconds
// Step 3: Red light for cars, green for pedestrians
digitalWrite(carYellow, LOW);
digitalWrite(carRed, HIGH);
digitalWrite(pedRed, LOW);
digitalWrite(pedGreen, HIGH);
delay(5000); // Pedestrians cross for 5 seconds
// Step 4: Flash yellow light for cars before green light
digitalWrite(pedGreen, LOW);
digitalWrite(pedRed, HIGH);
for (int i = 0; i < 3; i++) {
digitalWrite(carYellow, HIGH);
delay(500);
digitalWrite(carYellow, LOW);
delay(500);
}
}