#include <iostream>
using namespace std;

int main(){
   int n=14564;
  
   int x;
   for(x=2;x<n;x++){
       if(n%x==0){
           cout<<"Non prime";
           break;
       }
   }
  if (n==x){
      cout <<"prime no";
  }else if(n==1){
      cout<<"1 is a special case prime no";

  }else if(n<=0){
      cout <<"invalid input";
  }

    return 0;
}