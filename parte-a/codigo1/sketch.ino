// APE 1 - Sistemas Digitales (UNL)
// Parte A - Código 1
// Propósito: línea base que hace parpadear el LED integrado con la API de Arduino
// Placa: Arduino UNO (ATmega328P @ 16 MHz), simulación en Wokwi
// Pines: D13 = PB5 (LED integrado "L")

void setup() {
  pinMode(13, OUTPUT);          // D13 = PB5 (LED integrado "L")
}

void loop() {
  digitalWrite(13, HIGH);       // enciende el LED
  delay(500);
  digitalWrite(13, LOW);        // apaga el LED
  delay(500);
}
