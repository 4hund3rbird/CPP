#include <bits\stdc++.h>
using namespace std;
int main(){
    int n=5;
    int x=2*n-1;
   for(int i=1;i<=x;i++){
       for(int j=1;j<=x;j++){
           if(i==1||j==1){
               cout<<n;
           }else if(i==x||j==x){
               cout<<n;
           }else{
               cout<<" ";
           }
       }cout<<endl;
   }
    
   
   return 0;
}