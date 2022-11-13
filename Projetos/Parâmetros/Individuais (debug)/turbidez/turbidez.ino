int SensorTurbidez = A2; // Define o pino de Leitura do Sensor

// Inicia as variáveis
int i; // contador
float voltagem; 
float NTU;// Turbidez

void setup() {
  Serial.begin(9600);//configura a taxa de transferência em bits por segundo (baud rate)

}

void loop() {
voltagem = 0;// Inicia a leitura da voltagem em 0
for (i = 0; i < 800; i++) { // Realiza a soma dos "i" valores de voltagem
voltagem += ((float)analogRead(SensorTurbidez) / 1024) * 5;
}
voltagem = voltagem / 800;// Realiza a média entre os valores lidos na função for acima
voltagem = voltagem * (4.2/3.2); // taxa de conversão básica (em água sensor deveria dar 4.2v, mas dá 3,2v)
voltagem = ArredondarPara(voltagem, 1);
if (voltagem < 2.5) {// Se voltagem menor que 2.5 fixa o valor de NTU
NTU = 3000;
}
else if (voltagem > 4.2) {// Se voltagem maior que 4.2 fixa o valor de NTU
NTU = 0;
voltagem = 4.2;
}
else {// Senão calcula o valor de NTU através da fórmula
NTU = -1120.4 * square(voltagem) + 5742.3 * voltagem - 4353.8;
}
Serial.print("Voltagem: "); // printa os valores
Serial.println(voltagem);
Serial.print((((float)analogRead(SensorTurbidez) / 1024) * 5));
Serial.println(" NTU");
delay(00);
}

// Sistema de arredendamento para Leitura
float ArredondarPara( float ValorEntrada, int CasaDecimal ) {
float multiplicador = powf( 10.0f, CasaDecimal );
ValorEntrada = roundf( ValorEntrada * multiplicador ) / multiplicador;
return ValorEntrada;
}
