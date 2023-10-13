import serial
import time

ser = serial.Serial('COM4', 115200, timeout=1)

while 1:
    ser.write(str('234,123,234').encode())
    stst = ser.readline().decode()
    print (stst)

