#include<iostream>
#include<fstream>
using namespace std;
class Employees
{   public:
    string name;
    float salary;
};
void menu();
void menu1();
void dataentry(Employees list[],int n);
void getdata();



int main()
{
    menu();

    
    return 0;
}

void menu()
{   
    int dec;
    cout<<"\tPress 0 to enter employee's data"<<endl;
    cout<<"\tPress 1 to get employee's data"<<endl;
    cin>>dec;
    switch(dec)
    {
        case 0:
            menu1();
            break;
        case 1:
            getdata();
            break;
        default:
            cout<<"\a!!!Invalid Input!!!"<<endl;
    }
}

void menu1()
{
    int n;
    cout<<"\benter no of employees"<<endl;
    cin>>n;
    cout<<"----------------------------------------------------->"<<endl;
    Employees list[n];
    for(int i=0;i<n;i++)
    {
        string name;
        cout<<"\bEnter name of the employee "<<i+1<<endl;
        cin.ignore();
        getline(cin,name);
        float salary;
        cout<<"\bEnter salary of employee in Rupees "<<i+1<<endl;
        cin>>salary;
        cout<<"----------------------------------------------------->"<<endl;

        list[i].name=name;
        list[i].salary=salary;
    }
    dataentry(list,n);
}

void dataentry(Employees list[],int n)
{
    fstream datafile;
    
    datafile.open("Employee_data.txt",ios::in|ios::app);
    for(int i=0;i<n;i++)
    {
        datafile<<"\n|||Name-->          |||\n|||"<<list[i].name<<"\n|||salary-->        |||\n|||"<<list[i].salary<<"\n-------------------------------------------------"<<endl;
    }
    datafile.close();
}

void getdata()
{
    ifstream datafile;
    datafile.open("Employee_data.txt",ios::out);
    string data;
    while(getline(datafile,data))
    {
        cout<<data<<endl;
    }
    datafile.close();
} 




