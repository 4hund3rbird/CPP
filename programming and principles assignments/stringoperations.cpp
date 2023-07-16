#include<iostream>
#include<string>
#include<algorithm>
#include<windows.h>
#include<iomanip>
#include<conio.h>
using namespace std;
#define space 32
#define enter 13
void namesp(){
   
    string name;
    cout<<"What is your name??";
    cin>>name;
}

int main(){
    
    while(1){
        system("cls");
        string name;
        int c=0;
        cout<<"name"<<endl;
        c=getch();
        if(c==enter){
        system("color 4");
        namesp();
        }
    }
    return 0;
}

  