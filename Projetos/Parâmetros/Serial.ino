 //Bibliotecas
  //Temp_Sonda
    #include <OneWire.h> //biblioteca para leitura do protocolo
    #include <DallasTemperature.h> //biblioteca para leitura do sensor
  //DHT11
    #include "DHT.h" //biblioteca DHT11
//Variáveis
  //Turbidez
    int SensorTurbidez = A2; // Define o pino de Leitura do Sensor
    int i; // contador turbidez
    float voltagem; // voltagem turbidez 
    float NTU; // Turbidez
   //Temp_Sonda
    #define ONE_WIRE_BUS 22 // Porta do pino de sinal do DS18B20
   //DHT11
    #define DHTPIN A0 // pino que estamos conectado
    #define DHTTYPE DHT11 // fala que utilizamos o DHT 11
   //pH
    int ph_pin = A1; // define o pino para o ph  
//Inicialização    
  //Temp_Sonda
    OneWire oneWire(ONE_WIRE_BUS); // Define uma instancia do oneWire para comunicacao com o sensor
    DallasTemperature sensors(&oneWire); // "Sinaliza" o sensor e o protocolo
    DeviceAddress sensor1;
  //DHT11
    DHT dht(DHTPIN, DHTTYPE);//passa essas informações
void setup() { // Rodo apenas uma vez:
  //Temp_sonda
    sensors.begin(); //inicializa o sensor
    //{DEBUG}
      //Localiza e mostra enderecos dos sensores
        //Serial.print(sensors.getDeviceCount(), DEC);
        if (!sensors.getAddress(sensor1, 0)) 
          Serial.println("Sensor sonda nao encontrados!"); 
      //{DEBUG} caso necessário
        // Mostra o endereco do sensor encontrado no barramento
        //Serial.print("Endereco sensor: ");
        //mostra_endereco_sensor(sensor1);
  //DHT11
    dht.begin(); // inicia o sensor
  //Baud_Rate
    Serial.begin(9600);//configura a taxa de transferência em bits por segundo (baud rate)
}
//Temp_Sonda
  void mostra_endereco_sensor(DeviceAddress deviceAddress){
    for (uint8_t i = 0; i < 8; i++){// Adiciona zeros se necessário
      if (deviceAddress[i] < 16) Serial.print("0");
      //Serial.print(deviceAddress[i], HEX);
    }
  }
void loop() { // Código principal, Roda repetivamente:
//Turbidez
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
  //Serial.print("Voltagem Turbidez: "); // printa os valores
  //Serial.println(voltagem);
  Serial.print(NTU);
  Serial.println(" NTU");
//Temp_Sonda
  sensors.requestTemperatures();// Le a informacao do sensor
  float tempC = sensors.getTempC(sensor1);// Atualiza temperaturas minima e maxima
  Serial.print("Temp C: ");// Mostra dados no serial monitor
  Serial.println(tempC);
//DHT11
  float h = dht.readHumidity(); // realiza a leitura da umidade
  float t = dht.readTemperature(); // Realiza a leitura da temperatura
  if (isnan(t) || isnan(h))  { // caso não consiga realizar a leitura
    Serial.println("Failed to read from DHT");
  } 
  else{
    Serial.print("Umidade: "); // printa a umidade
    Serial.print(h);
    Serial.println("");
    Serial.print("Temperatura: "); // printa a temperatura
    Serial.print(t);
    Serial.println(" *C");
  }
//pH
  int measure = analogRead(ph_pin); // realiza a leitura analog d
  //Serial.print("Measure: "); // printa o valor
  //Serial.print(measure);
  double voltage = 5 / 1024.0 * measure; //converte o valor analógico(que vai de 0 - 1023) para voltagem  (0 - 5V)
  //Serial.print("\tVoltage: "); // printa o valor
  //Serial.print(voltage, 3); // o "3" é de casas decimais
  float Po = (-8.2013 * voltage) + 29.722; // converte a voltagem para pH
  Serial.print("PH: ");
  Serial.print(Po, 3);
  Serial.println("");
//Delay
  delay(60000); // em ms
}
//Turbidez
  //Sistema de arredondamento para leitura
    float ArredondarPara( float ValorEntrada, int CasaDecimal ) {
      float multiplicador = powf( 10.0f, CasaDecimal );
      ValorEntrada = roundf( ValorEntrada * multiplicador ) / multiplicador;
      return ValorEntrada;
    }
