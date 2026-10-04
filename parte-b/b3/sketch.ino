// APE 1 - Sistemas Digitales (UNL)
// Parte B - Paso B3
// Propósito: conmutar PB5 escribiendo un 1 en PINB
// Placa: Arduino UNO (ATmega328P @ 16 MHz), simulación en Wokwi
// Pines: D13 = PB5 (LED integrado "L")
// En el ATmega328P, escribir 1 en un bit de PINx conmuta el bit de PORTx por hardware.

void setup() {
  DDRB |= (1 << DDB5);          // PB5 como salida
}

void loop() {
  PINB = (1 << PINB5);          // conmuta PB5 sin leer antes PORTB
  delay(500);
}
