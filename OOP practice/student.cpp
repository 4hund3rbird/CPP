#include<iostream>
using namespace std;

class student
{
    private:
        string name;
        string birthdate;
        string div;
        string phnumber;
    public:
       /* void setname(string n){name=n;}
        void setbirthdate(string n){birthdate=n;}
        void setdiv(string n){div=n;}
        void setphnumber(string n){phnumber=n;}*/

        void set_everything(string na,string b,string d,string ph)
        {
            name=na;
            birthdate=b;
            div=d;
            phnumber=ph;
        }

        void get_everything()
        {
            cout<<name<<endl;
            cout<<birthdate<<endl;
            cout<<div<<endl;
            cout<<phnumber<<endl;
        }

        string getname(){return name;}
        string getbirthdate(){return birthdate;}
        string getdiv(){return div;}
        string getphnumber(){return phnumber;}
        
        

};



int main()
 {  // student student1;
//     student1.setname("aniket");
//     student1.setbirthdate("10/12/2021");
//     student1.setdiv("D");
//     student1.setphnumber("9403284984");
    int n;
    cout<<"enter no of students";
    cin>>n;
   student students[n];
   for(int i=0;i<=n;i++)
   {
       string na,b,d,ph;
       cin>>na>>b>>d>>ph;
       students[i].set_everything(na,b,d,ph);
    
    }
    for(int i=0;i<=n;i++)
   {
       students[i].get_everything();
    
    }

  return 0;  
}