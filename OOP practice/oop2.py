class Person():
    def __init__(self,name):
        self.name=name

    def talk(self):
        print(f"Hi my name is {self.name}")
        
    def names():
        for i in range(5):
            name2=input()
            person1=Person(name2)
            person1.talk()

Persons=Person("admin")
persons.names()