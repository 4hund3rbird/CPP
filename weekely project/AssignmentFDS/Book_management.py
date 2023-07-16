from time import ctime
class Book:
    def __init__(self,title,author,publication,):
        self.title=title
        self.author=author
        self.publication=publication
    def is_returned(self):
        with open("books.txt","a") as bookdata:
            bookdata.write("\n{}-{}-{}-is returned-{}".format(self.title,self.author,self.publication,ctime()))
        bookdata.close()
    def is_taken(self):
        with open("books.txt","a") as bookdata:
            bookdata.write("\n{}-{}-{}-is taken-{}".format(self.title,self.author,self.publication,ctime()))
        bookdata.close()
def view_data():
    with open("books.txt","r") as bookdata:
        data=bookdata.readline()
        print(data)
    bookdata.close()
if __name__=='__main__':
    dec=int(input("press 0 to enter take book details\npress 1 to view data\n"))
    if dec==0:
        print("enter book details here\n")
        title=input("enter title of the book - ")
        author=input("enter author of the book - ")
        publication=input("enter publication of the book - ")
        title=Book(title,author,publication)
        dec1=int(input("to return book press 0\nto take book press 1\n"))
        if dec1==0:
            title.is_returned()
        elif dec1==1:
            title.is_taken()
        else:
            print("Invalid Input!!!\a") 
    elif dec==1:
        view_data()
    else:
        print("Invalid Input!!!\a")
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
       
        
        