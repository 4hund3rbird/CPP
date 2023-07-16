#include<iostream>
using std::string;
class Employee
{
    private:
        std::string name;
        std::string company;
        int age;
    public:

        void setter(string Name,string Company,int Age)
        {
            name=Name;
            company=Company;
            age=Age;
        }

        string gettername()
        {
            return name;
        }

         string gettercompany()
        {
            return company;
        }

         int getterage()
        {
            return age;
        }

        Employee(std::string Name,std::string Company,int Age)
        {
            name=Name;
            company=Company;
            age=Age;
        }
};


int main()
{
    // Employee employee1=Employee("aniket","Google",19);
    
    int n;
    cin>>n;
    Employee employees[n];
    for(int i=0;i<n;i++)
    {
        string name;
        string company;
        int age;
        employees[i].setter(name,company,age);
    }
    for(int val:range(n))
    {
        std::cout<<val.name<<val.company<<val.age<<std::endl;
    }
    return 0;
}