#include <iostream>
using namespace std;
int main(){
   int n=12;
   

   
   for(int row1=1;row1<=n;row1++){
       for(int col1=1;col1<=n;col1++){
          if (row1==n){
              cout<<'-';
          }else if(col1==n){
              cout<<'|';
          }else if(col1==n-row1){
              cout<<'/';
              }else if(col1<=n-row1){
               cout<<" ";
          }else{
               cout<<'*';
           }
       }
       for(int col1=n;col1<=2*n;col1++){
          if (row1==n){
              cout<<'-';
          }else if(col1==n){
              cout<<'|';
          }else if(col1==n+row1){
              cout<<'\\';
              }else if(col1<=n+row1){
               cout<<"*";
          }
       }
      
       
       
       
       
        cout<<" "<<endl;
   }
   
    for(int row1=n;row1>=1;row1--){
       for(int col1=1;col1<=n;col1++){
          if (row1==n){
              cout<<'-';
          }else if(col1==n){
              cout<<'|';
          }else if(col1==n-row1){
              cout<<'\\';
              }else if(col1<=n-row1){
               cout<<" ";
          }else{
               cout<<'*';
           }
       }
       for(int col1=n;col1<=2*n;col1++){
          if (row1==n){
              cout<<'-';
          }else if(col1==n){
              cout<<'|';
          }else if(col1==n+row1){
              cout<<'/';
              }else if(col1<=n+row1){
               cout<<"*";
          }
       }
     
       
       
       
       
       
       
       
        cout<<" "<<endl;
   }
  
       

    return 0;
}