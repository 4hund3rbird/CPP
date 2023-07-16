#include <iostream>
using namespace std;
int main(){
    string name = "aniket";
    int a = name.length();
    cout<<"length of string is "<<a<<endl;
    while(a>=0){
        cout<<name[a];
        a--;
    }
    
    return 0;
}