import time
from pymata4 import pymata4
import winsound

count=0
trigpin=11
ecopin=12

board = pymata4.Pymata4()
def the_callback(data):
    global count
    print("distance :",data[2])
    if data[2]<100:
        winsound.Beep(500-data[2],500-2*data[2])

    board.set_pin_mode_sonar(trigpin,ecopin,the_callback)
while True:
    try:
        time.sleep(1)
        board.sonar_read(trigpin)
    except:
        board.shutdown()