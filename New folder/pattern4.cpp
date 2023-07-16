#include <iostream>
#include <fstream>
using namespace std;
int main(){
     ofstream myfilel("myfile.txt");

    myfilel<<"this is a text";


    myfilel.close();

    string mytext;
    ifstream myread("myfile.txt");
    while(getline(myread,mytext)){
        cout<<mytext;
    }
   myfilel.close();
   










    return 0;
}
