#include <iostream>
using namespace std;
int main(){
 int n=15;

 int sum=1;
 for(int i=1;i<=n;i++){
     int j;
     for(j=2;j<i;j++){
         if(i%j==0){
             break;
         }
     }
     if(j==i){
         sum=sum+i;
     }
 }


        cout<<sum;




    return 0;
}