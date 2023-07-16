#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int sub;
    cout<<"Enter total number of subjects : ";
    cin>>sub;
    string subject;
    int marks;
    int outof;
    cout<<"Maximum marks of subject: ";
    cin>>outof;
    ofstream open ("marksof.txt");
   for(int i=1;i<=sub;i++){
       cout<<"Enter subject name : ";
       cin>>subject;
       cout<<"Enter marks : ";
       cin>>marks;
       open<<subject<<" - ";
       open<<marks<<"/"<<outof<<endl;
    
   }  open.close();
    return 0;
}