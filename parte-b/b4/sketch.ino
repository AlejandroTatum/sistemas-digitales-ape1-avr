// APE 1 - Sistemas Digitales (UNL)
// Parte B - Paso B4
// Propósito: probar la asignación directa a PORTB en lugar de OR
// Placa: Arduino UNO (ATmega328P @ 16 MHz), simulación en Wokwi
// Pines: D13 = PB5 (LED integrado "L")
// Con la asignación se escribe el byte completo: PB5 queda en 1 y los demás bits en 0.
// Aquí funciona porque PB5 es la única salida usada; con más salidas en PORTB las apagaría.

void setup() {
  DDRB |= (1 << DDB5);          // PB5 como salida
}

void loop() {
  PORTB = (1 << PORTB5);        // asignación: enciende PB5 y pone en 0 el resto de PORTB
  delay(500);
  PORTB &= ~(1 << PORTB5);      // apaga PB5
  delay(500);
}
