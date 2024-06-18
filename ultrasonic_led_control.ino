// Definindo os pinos do sensor ultrassônico
const int trigPin = 9;
const int echoPin = 10;

// Definindo os pinos dos LEDs
const int ledVerde = 2;
const int ledAmarelo = 3;
const int ledVermelho = 4;

void setup() {
  // Configurando os pinos como saída ou entrada
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  // Iniciando a comunicação serial
  Serial.begin(9600);
}

void loop() {
  // Gerando um pulso ultrassônico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Calculando a duração do eco
  long duration = pulseIn(echoPin, HIGH);

  // Convertendo a duração em distância
  float distance = duration * 0.034 / 2;

  // Imprimindo a distância no Serial Monitor
  Serial.print("Distância: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Acionando os LEDs com base na distância
  if (distance > 20) {
    // Distância segura
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
  } else if (distance > 10 && distance <= 20) {
    // Distância intermediária
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
  } else {
    // Distância perigosa
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
  }

  // Atraso para estabilidade da leitura
  delay(100);
}
