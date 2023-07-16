#include <iostream>
#include <fstream>
using namespace std;
int main(){
   string st1;
   string st2="you are here";

//    ifstream out("database.txt");
//    getline(out,st1);
//    cout<<st1;
    
    ofstream in("database.txt");
    in<<st2;
    
    return 0;

}