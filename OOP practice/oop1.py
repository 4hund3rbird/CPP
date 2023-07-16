# write a program that calculates the average score of total students passed in an exam
class subject:
    def __init__(self,name,students,marks) :
        self.name=name
        self.students=students
        self.marks=marks
        
    
        
    def get_avg(self):
        avg=self.marks/self.students
        
        return avg    
class list:
    def __init__(self,subject):
        self.subject=subject
        self.namelist=[]
    
    def add_list(self,sub):
        if len(self.namelist)<=6:
            self.namelist.append(sub)
      
    def printlist(self):
        for i in self.namelist :
            print(i)
                
            
                
    
subject1=subject("maths",100,6000)
subject2=subject("physics",100,5000)
subject3=subject("chemistry",100,9000)
subject4=subject("biology",100,4000)
subject5=subject("OS",100,7800)
subject6=subject("electronics",100,9780)

list1=list(subject1)
list1.add_list(subject1)

list1.printlist()

    