int Merah = 23;  // Pin lampu merah
int Kuning = 22;  // Pin lampu kuning
int Hijau = 21;  // Pin lampu hijau

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  pinMode(Merah, OUTPUT);
  pinMode(Kuning, OUTPUT);
  pinMode(Hijau, OUTPUT);
}

void loop() {
  // Lampu Merah menyala, yang lain mati
  digitalWrite(Merah, HIGH);
  digitalWrite(Kuning, LOW);
  digitalWrite(Hijau, LOW);
  delay(1000); 

  // Lampu Kuning menyala, yang lain mati
  digitalWrite(Merah, LOW);
  digitalWrite(Kuning, HIGH);
  digitalWrite(Hijau, LOW);
  delay(800);  

  // Lampu Hijau menyala, yang lain mati
  digitalWrite(Merah, LOW);
  digitalWrite(Kuning, LOW);
  digitalWrite(Hijau, HIGH);
  delay(600);
}
