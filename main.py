import serial

ser = serial.Serial('COM4', 115200, timeout=1)

while 1:
    ser.write(str('234,123,234').encode()) #передаем строчку в ком-порт, улетает в виде массива байтов
    stst = ser.readline().decode() #ловим ответочку от платы
    print (stst) #выводим на экран

