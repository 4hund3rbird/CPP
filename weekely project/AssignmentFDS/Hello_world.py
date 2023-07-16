import os
import time
from random import randint
def hello_world():
    return "\033[2;32;40m<<<<Hello World>>>>"
if __name__=="__main__":
    message=hello_world()
    while True:
        for i in range(10,100,2):
            time.sleep(0.2)
            os.system("cls")
            print(message.rjust(i))
        for i in range(99,10,-2):
            time.sleep(0.2)
            os.system("cls")
            print(message.rjust(i))