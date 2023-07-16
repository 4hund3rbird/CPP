#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>

#define ENTER 13
using namespace std;


void displayclock(){
    system("cls");
    
while(1){
for(int hours =1;hours<=24;hours++)
{
    for(int minutes =1;minutes<=60;minutes++)
    {
        for(int seconds =1;seconds<=60;seconds++){
            
            system("cls");
            cout<<hours<<" "<<minutes<<" "<<seconds<<endl;
            system("color 4");
            Beep(200,1000);
            
        }
    }
}

}
}
void highlight( string entry){
   
   
    cout<<setw(70)<<entry<<system("color 4B");
    
}


int main(){
//clock using cpp;
int c;

highlight("this is a clock");
c=0;
c=getch();
switch(c){
    case(ENTER):
        displayclock();
        break;
    default:
        break;    
}

    return 0;
}