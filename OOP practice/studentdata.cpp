#include<iostream>


using namespace std;

class students
{
    private:
        string dob;
        string blood_grp;
        string contact;
        string address;
    
    public:
        string name;
        string roll_no;
        string std;
        string division;
//getters and setters 
    void setdob(string Dob)
    {
        dob=Dob;
    }
    void setblood_grp(string bg)
    {
        blood_grp=bg;
    }
    void setcontact(string ct)
    {
        contact=ct;
    }
    void setaddress(string Address)
    {
        address=Address;
    }
    string getdob()
    {
        return dob;
    }
    string getblood_grp()
    {
        return blood_grp;
    }
    string getcontact()
    {
        return contact;
    }
    string getaddress()
    {
        return address;
    }
    //constructor
    // students(string Name, string Roll, string Std, string Div)
    // {
    //     name=Name;
    //     roll_no=Roll;
    //     std=Std;
    //     division=Div;
    // }
    void getdata()
    {
        cout<<"Name= "<<name<<endl;
        cout<<"Roll no= "<<roll_no<<endl;
        cout<<"standard= "<<std<<endl;
        cout<<"division= "<<division<<endl;
        cout<<"Addres= "<<getaddress()<<endl;
        cout<<"blood group= "<<getblood_grp()<<endl;
        cout<<"contact= "<<getcontact()<<endl;
        cout<<"date of birth= "<<getdob()<<endl;
    }
};
//you can use default constructor to make array of students to make program dynamic and efficient
//students arr[no of students]; -- array of objects
//arr[i].name etc;
int main()
{
    // students student1=students("aniket","2225","10th","D");
    // student1.setaddress("Maharashtra,pune,narhe");
    // student1.setblood_grp("A-");
    // student1.setcontact("465489712");
    // student1.setdob("04/05/1999");
    // student1.getdata();
    int student;
    cout<<"Enter no of students"<<endl;
    cin>>student;
    students arr[student];
        
    
    return 0;
}