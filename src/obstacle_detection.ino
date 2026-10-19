// Obstacle Detection - HC-SR04 ultrasonic sensor
// Obstacle-Avoiding Robot | Applied Robotics and AI Project

const int TRIG_PIN = 9;
const int ECHO_PIN = 10;
const int OBSTACLE_DISTANCE_CM = 15;  // stop distance threshold

long readDistanceCm() {
  // Send a 10 microsecond pulse to trigger the sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Measure how long the echo pin stays HIGH (timeout 30 ms)
  long duration = pulseIn(ECHO_PIN, HIGH, 30000);

  // No echo received means nothing in range
  if (duration == 0) {
    return -1;
  }

  // Sound travels about 0.034 cm per microsecond (there and back, so divide by 2)
  return duration * 0.034 / 2;
}

bool obstacleDetected() {
  long distance = readDistanceCm();
  return (distance > 0 && distance <= OBSTACLE_DISTANCE_CM);
}

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  long distance = readDistanceCm();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (obstacleDetected()) {
    Serial.println("Obstacle detected!");
  }

  delay(200);
}