#include <iostream>
using namespace std;
int main(){









int x;
x=120;
int y;
int sum=1;
for (int num=1; num<=x; num++) {
    int i;  
    for (i=2; i<num; i++) {
        if (num%i==0) { //it is not prime
        break;
     }
 }
    if (i==num) { //loop has completed all iterations
      sum=sum+num;
    }   
    }cout<<sum;
    
return 0;
}