import time
from time import sleep
import mysql.connector
import serial

db = mysql.connector.connect(  # conecta com o bd
    host="databases.cxt7a2qfzmjp.us-east-1.rds.amazonaws.com",
    user="root",
    passwd="Root123#",
    database="dados"
)
# Tenha certeza da porta de comunicação está marcada de acordo com o windows manager
ser = serial.Serial('COM3', 9600, timeout=1)
sleep(60)
numeros = []
while True:
    data = time.strftime('%Y-%m-%d', time.localtime())
    line = ser.readline()  # read a byte

    if line:
        string = line.decode()  # convert the byte string to a unicode string
        for t in string.split():
            try:
                numeros.append(float(t))
            except ValueError:
                pass
        if len(numeros) == 5:
            ph = numeros[4]
            temp_agua = numeros[1]
            temp_ambi = numeros[3]
            umidade = numeros[2]
            turbidez = numeros[0]
            mycursor = db.cursor()
            dados = "INSERT INTO pet (data_hora, ph, temp_agua, temp_ambi, umidade, turbidez) VALUES (%s, %s, %s, %s, %s, %s);"
            val = (data, ph, temp_agua, temp_ambi, umidade, turbidez)
            mycursor.execute(dados, val)
            print("No of Record Inserted :", mycursor.rowcount)
            print("Inserted Id :", mycursor.lastrowid)
            db.commit()
            numeros = []
            sleep(120)
db.close()
