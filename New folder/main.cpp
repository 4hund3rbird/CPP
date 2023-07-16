#include <iostream>

using namespace std;

int main()
{

    string part,adject,colour,obj,adj;

    cout<<"enter a colour:   ";
     getline(cin,colour);
    cout<<"enter a part:     ";
     getline(cin,part);
    cout<<"enter a adjective:";
    getline(cin,adject);
    cout<<"enter a object: ";
    getline(cin,obj);
    cout<<"enter another adjective: ";
     getline(cin,adj);


    cout<<"I love your "<<part <<" when they're "<<adject<<" with "<<obj <<endl;
           cout<<"And "<<colour<<" with a "<<adj<<" desire";







    return 0;
}
