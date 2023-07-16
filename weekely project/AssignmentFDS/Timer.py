import os
import time
import winsound
from datetime import datetime
def hour(a,b,c):
        for i in range(a,0,-1):
            for j in range(b,0,-1):
                for k in range(c,0,-1):
                    print('{}-{}-{}'.format(i,j,k).rjust(50))
                    time.sleep(1)
                    winsound.Beep(500,3)
        print("timer is done\a\a")
def minute(b,c):
            for j in range(b,0,-1):
                for k in range(c,0,-1):
                    print('{}-{}-{}'.format(0,j,k).rjust(50))
                    time.sleep(1)
                    winsound.Beep(500,3)
            print("timer is done\a\a")        
def seconds(c):
                for k in range(c,0,-1):
                    print('{}-{}-{}'.format(0,0,k).rjust(50))
                    time.sleep(1)
                    winsound.Beep(500,3)
                print("timer is done\a\a")
def timer(a,b,c):
     if a!=0 and b!=0 and c!=0:
         hour(a,b,c)
     elif a==0 and b!=0 and c!=0:
         minute(b,c)  
     elif a==0 and b==0 and c!=0:
         seconds(c)  
def currenttime():
    current_time=datetime.now().time().strftime('%H-%M-%S')
    print(time.ctime())
if __name__=="__main__":
    dec=int(input("press 0 for current time\npress 1 to set timer\n"))
    if dec==0:
        currenttime()
    elif dec==1:
        a=int(input("enter no of hours "))
        b=int(input("enter no of minutes "))
        c=int(input("enter no of seconds "))
        timer(a,b,c)
    else:
        print("Invalid Input!!!\a")
   
              
              
              
              
              
              