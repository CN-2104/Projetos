#include <OneWire.h> //biblioteca para leitura do protocolo
#include <DallasTemperature.h> //biblioteca para leitura do sensor
// Porta do pino de sinal do DS18B20
#define ONE_WIRE_BUS 22
// Define uma instancia do oneWire para comunicacao com o sensor
OneWire oneWire(ONE_WIRE_BUS);
 
DallasTemperature sensors(&oneWire); //"Sinaliza" o sensor e o protocolo
DeviceAddress sensor1;
 

void setup(void)
{
  Serial.begin(9600); //configura a taxa de transferência em bits por segundo (baud rate)
  sensors.begin(); //inicializa o sensor
  // {DEBUG} Localiza e mostra enderecos dos sensores

  //Serial.print(sensors.getDeviceCount(), DEC);

  if (!sensors.getAddress(sensor1, 0)) 
     Serial.println("Sensores nao encontrados !"); 
     //{DEBUG} caso necessário
  // Mostra o endereco do sensor encontrado no barramento
  //Serial.print("Endereco sensor: ");
  //mostra_endereco_sensor(sensor1);

   
}
 
void mostra_endereco_sensor(DeviceAddress deviceAddress)
{
  for (uint8_t i = 0; i < 8; i++)
  {
    // Adiciona zeros se necessário
    if (deviceAddress[i] < 16) Serial.print("0");
    //Serial.print(deviceAddress[i], HEX);
  }
}
 
void loop()
{
  // Le a informacao do sensor
  sensors.requestTemperatures();
  float tempC = sensors.getTempC(sensor1);
  // Atualiza temperaturas minima e maxima

  // Mostra dados no serial monitor
  Serial.print("Temp C: ");
  Serial.println(tempC);

   

  delay(3000); //Delay
}
