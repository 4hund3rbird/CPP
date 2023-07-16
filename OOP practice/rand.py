import random

# print(random.randint(10,20))

class dice:
    def roll_dice(self):
        print(random.randint(1,6))
        

class names:
    def __init__(self,list) :
       self.list=list

    def random_name(self):
        print(random.choice(self.list))
        
        
def name():
    list=["aniket","ram","rahul"]
    list1=names(list)
    list1.random_name()


#inheritance -----------------------------------------------------------
class Mammals:
    def __init__(self) -> None:
        self.live="Grounds"
    def lives(self):
        print(self.live)
    def can_breathe(self):
        print("can breathe.")
        
class dogs(Mammals):
    def __init__(self,name) -> None:
        self.name=name
    def are_short(self):
        print("are short")
        
Puppy1=dogs("mark")

print(Puppy1.name)
Puppy1.lives()
Puppy1.can_breathe()