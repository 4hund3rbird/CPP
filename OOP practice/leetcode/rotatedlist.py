import sys
sys.stdin=open('input.txt','r')
sys.stdout=open("output.txt","w")

if __name__=="__main__":
    a=input()
    b=list(a)
    n=len(a)
    for i in range(n):
        if(i<n-1):
            c=b[i]
            b[i]=b[n-i]
            b[n-i]=c
        
    print(b)