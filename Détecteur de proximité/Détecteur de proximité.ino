// C++ ALARME DETECTION DE DETECTION DE PROXIMITE
// Max_Adis

// Définition des broches
const int trigPin = 5;   // Broche TRIG du capteur ultrason
const int echoPin = 4;   // Broche ECHO du capteur ultrason
const int ledRouge = 3;  // LED verte
const int ledVerte = 2;  // LED rouge

void setup() {
  // Initialisation des broches
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledVerte, OUTPUT);
  pinMode(ledRouge, OUTPUT);

  // Initialisation du moniteur série
  Serial.begin(9600);
}

void loop() {
  // Envoi d’une impulsion sur TRIG
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Lecture du temps de retour sur ECHO
  long duree = pulseIn(echoPin, HIGH);

  // Calcul de la distance en cm
  long distance = duree * 0.034 / 2;

  // Affichage dans le moniteur série
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Allumage des LEDs selon la distance
  if (distance < 10) {
    digitalWrite(ledRouge, HIGH);
    digitalWrite(ledVerte, LOW);
  } else {
    digitalWrite(ledRouge, LOW);
    digitalWrite(ledVerte, HIGH);
  }

  // Attente de 2 secondes avant la prochaine mesure
  delay(200);
}
