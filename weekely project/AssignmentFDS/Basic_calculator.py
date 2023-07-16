#This is python program of basic calculator
def Addition(a,b):
    print(a+b)
def Substraction(a,b):
    print(a-b)
def Multiplication(a,b):
    print(a*b)
def Division(a,b):
    print(a/b)

#main function---------------------------------------------------------------------------------------------------------
if __name__=="__main__":
    a=float(input("Enter first integer here- "))
    op=(input("Enter operator for operation here- "))
    b=float(input("Enter second integer here- "))
    
    if op=='+':
        Addition(a,b)
    elif op=='-':
        Substraction(a,b)
    elif op=='*':
        Multiplication(a,b)
    elif op=='/':
        Division(a,b)
