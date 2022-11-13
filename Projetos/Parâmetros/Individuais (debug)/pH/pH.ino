int ph_pin = A1; // define o pino para o ph

void setup() { 
  Serial.begin(9600); //configura a taxa de transferência em bits por segundo (baud rate)
  }

void loop() {
  int measure = analogRead(ph_pin); // realiza a leitura analog d
  Serial.print("Measure: "); // printa o valor
  Serial.print(measure);

  double voltage = 5 / 1024.0 * measure; //converte o valor analógico(que vai de 0 - 1023) para voltagem  (0 - 5V)
  Serial.print("\tVoltage: "); // printa o valor
  Serial.print(voltage, 3);

  // PH_step = (voltage@PH7 - voltage@PH4) / (PH7 - PH4)
  // PH_probe = PH7 - ((voltage@PH7 - voltage@probe) / PH_step)
  float Po = (-8.2013 * voltage) + 29.722; // converte a voltagem para pH
  Serial.print("\tPH: ");
  Serial.print(Po, 3);

  Serial.println("");
  delay(2000);
}
