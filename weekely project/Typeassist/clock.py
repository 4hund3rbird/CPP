import time
import os
from typing import Counter

class timer():
    def timr(self):
        for i in range(60):
            os.system("cls")
            
            print(str(i).center(100))
            time.sleep(1)


class Time():
    def __init__(self,i,j,k):
      
        self.hours=i
        self.minutes=j
        self.seconds=k
        self.counter=0
    
    def settime(self):
            
           
            hrs=self.hours
            sec=self.seconds
            minu=self.minutes
                
                
            while True:  
                for i in range(hrs,24):
                    for j in range(minu,60):
                        for k in range(sec,60):
                            
                            os.system("cls")
                            print(str(i).rjust(50),str(j),str(k))
                            time.sleep(1)
                        sec=0
                    minu=0
                hrs=0
def gettime():
    hours=int(input(">Enter hours here "))
    minutes=int(input(">Enter minutes here "))
    seconds=int(input(">Enter seconds here "))
    settime=Time(hours,minutes,seconds)

    settime.settime()
    
gettime()