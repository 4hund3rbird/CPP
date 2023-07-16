#include<iostream>
using namespace std;
class city 
{   private:
    string name;
    int pincode;
    public:
    city(string name1,int pincod)
    {   name=name1;
        pincode=pincod;
        cout<<name<<" has pincode "<<pincode<<endl;
    }
    // private:
    // string location;
    // string area;
};
class rectangle
{
    public:
    float length;
    float width;
    int area();
};

int main()
{


   city pune=city("Pune",451263);
   city solapur=city("solapur",413342);
   city latur=city("Latur",413512);
    




return 0;
}