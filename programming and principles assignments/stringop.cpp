#include<iostream>

using namespace std;

int main ()

{   
    int i=1,year=2021,oceanlevel=20;
    
    while(i<=25)
    {   
        cout<<"\t";
        cout<<"|"<<year<<"|"<<oceanlevel<<"|"<<endl;
        
        oceanlevel+=1.5;
        year++;
        i++;
    }
    cout<<"\t";
    return 0;
}

/*

2045 331129mm


*/