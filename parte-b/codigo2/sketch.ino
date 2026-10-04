// APE 1 - Sistemas Digitales (UNL)
// Parte B - Código 2
// Propósito: el mismo parpadeo, escribiendo directamente los registros
// Placa: Arduino UNO (ATmega328P @ 16 MHz), simulación en Wokwi
// Pines: D13 = PB5 (LED integrado "L")
// Regla: no se usa pinMode() ni digitalWrite()

void setup() {
  DDRB |= (1 << DDB5);          // PB5 (D13) como salida; los demás bits no cambian
}

void loop() {
  PORTB ^= (1 << PORTB5);       // XOR: conmuta solo el bit 5
  delay(500);                   // 500 ms encendido / 500 ms apagado
}
