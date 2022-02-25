import struct
import serial
import struct



with serial.Serial("COM5", 9600) as conn:
    while True:
        t = input('>')
        conn.write(str.encode(t))
