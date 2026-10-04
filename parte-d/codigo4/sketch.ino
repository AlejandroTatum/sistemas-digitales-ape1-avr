// APE 1 - Sistemas Digitales (UNL)
// Parte D - Código 4
// Propósito: medir el costo de digitalWrite() frente al acceso directo al registro
// Placa: Arduino UNO (ATmega328P @ 16 MHz), simulación en Wokwi
// Pines: D13 = PB5; los resultados salen por el Monitor Serie (9600 baudios)

const uint16_t N = 10000;       // repeticiones de cada bucle

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

  // Medición 1: API de Arduino
  unsigned long t0 = micros();
  for (uint16_t i = 0; i < N; i++) {
    digitalWrite(13, HIGH);
    digitalWrite(13, LOW);
  }
  unsigned long t1 = micros();

  // Medición 2: acceso directo al registro
  for (uint16_t i = 0; i < N; i++) {
    PORTB |= (1 << PORTB5);
    PORTB &= ~(1 << PORTB5);
  }
  unsigned long t2 = micros();

  // Tiempo por escritura = tiempo total / (2 escrituras * N)
  Serial.print(F("digitalWrite : "));
  Serial.print((t1 - t0) / (2.0 * N), 3);
  Serial.println(F(" us por escritura"));
  Serial.print(F("Registro     : "));
  Serial.print((t2 - t1) / (2.0 * N), 3);
  Serial.println(F(" us por escritura"));
}

void loop() {}                  // sin trabajo periódico
