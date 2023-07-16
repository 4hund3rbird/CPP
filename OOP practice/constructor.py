class Employee:
    def __init__(self,name,company,age):
        self.name=name
        self.company=company
        self.age=age

if __name__ == "__main__":
    list1=[];
    no_of_emp=int(input())
    for i in range(no_of_emp):
        name,company=input()
        age=int(input())
        list1.append(Employee(name,company,age))
    list1.append(Employee("aniket","Google",19))
    list1.append(Employee("Rahul","Microsoft",19))
    list1.append(Employee("Prakash","Adobe",29))
    list1.append(Employee("Sumit","Amazon",23))
    list1.append(Employee("Praniket","Netflix",21))    
    
    for i in list1:
        print("{}-{}-{}".format(i.name,i.company,i.age))
        