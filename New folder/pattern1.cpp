#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   
   for(int row=0;row<=n+1;row++){
       for(int col=0;col<=row;col++){
           if(row==0 || row==n+1){
               cout<<'-';
           }else if(col==0||col==row){
               cout<<'|';
           }else{
               cout<<'*';
           }
       }cout<<" "<<endl;
   }


    return 0;
}