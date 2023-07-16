87#This is a random password generator program
import random
import string
#global variables----------------------------------------------------------------------------------------------------
charlist=list(range(33,48))
charlist+=list(range(58,65))
charlist+=list(range(91,97))
charlist+=list(range(123,127))
alpha=list(string.ascii_letters)
   
def randomlist(n):
    password=alpha[random.randint(0,len(alpha))]
    
    for i in range(0,n):
        b=random.randint(0,3)
        if b==0:
            password+=alpha[random.randint(0,len(alpha))]
        elif b==1:
            password+=chr(charlist[random.randint(0,len(charlist)-1)])
        else :
            password+=str(random.randint(0,10))
    return password           
#main function----------------------------------------------------------------------------------------------------------
if __name__=="__main__":
    n=int(input("enter no of digits for password- "))
    print(randomlist(n)) 
   
   
   
            