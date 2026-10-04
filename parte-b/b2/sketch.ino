// APE 1 - Sistemas Digitales (UNL)
// Parte B - Paso B2
// Propósito: encender con OR y apagar con AND negado, con delay(500) entre ambos
// Placa: Arduino UNO (ATmega328P @ 16 MHz), simulación en Wokwi
// Pines: D13 = PB5 (LED integrado "L")
// Este es el contenido del proyecto de Wokwi de la Parte B.

void setup() {
  DDRB |= (1 << DDB5);          // PB5 como salida
}

void loop() {
  PORTB |= (1 << PORTB5);       // poner a 1 el bit PB5 (enciende el LED)
  delay(500);
  PORTB &= ~(1 << PORTB5);      // poner a 0 el bit PB5 (apaga el LED)
  delay(500);
}
