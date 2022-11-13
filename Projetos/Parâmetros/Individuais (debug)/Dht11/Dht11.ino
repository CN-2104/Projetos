#include "DHT.h" //biblioteca 
 
#define DHTPIN A0 // pino que estamos conectado
#define DHTTYPE DHT11 // fala que utilizamos o DHT 11
DHT dht(DHTPIN, DHTTYPE);//passa essas informações
 
void setup() 
{
  Serial.begin(9600); //configura a taxa de transferência em bits por segundo (baud rate)
  dht.begin(); // inicia o sensor
}
 
void loop() 
{

  float h = dht.readHumidity(); // realiza a leitura da umidade
  float t = dht.readTemperature(); // Realiza a leitura da temperatura
  if (isnan(t) || isnan(h))  
  { // caso não consiga realizar a leitura
    Serial.println("Failed to read from DHT");
  } 
  else
  {
    Serial.print("Umidade: "); // printa a umidade
    Serial.print(h);
    Serial.print(" %t"); // printa a temperatura
    Serial.print("Temperatura: ");
    Serial.print(t);
    Serial.println(" *C");
  }
    delay(2000);

}
