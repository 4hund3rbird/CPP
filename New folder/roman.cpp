#include <iostream>
using namespace std;       /*Write a program that asks the user to enter a number within the range of 1 through
10. Use a switch statement to display the Roman numeral version of that number.
Input Validation: Do not accept a number less than 1 or greater than 10.*/
    
    
     int main(){
       int a;
      
        cin>>a;
    
       switch(a){

       case 0:
       cout<<"0";
       break;
       case 1:
       cout<<"I";
       break;
        case 2:
       cout<<"II";
       break;
        case 3:
       cout<<"III";
       break;
        case 4:
        cout<<"IV";
       break;
        case 5:
        cout<<"V";
       break;
        case 6:
        cout<<"VI";
       break;
        case 7:
        cout<<"VII";
       break;
        case 8:
        cout<<"VIII";
       break;
        case 9:
        cout<<"IX";
       break;
        case 10:
        cout<<"X";
       break; 
       default:
        cout<<"invalid";
     }
     





    return 0;
}