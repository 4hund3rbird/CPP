#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
    
     int count=0;
     int x =2*n-1;
   
       while(n>=1){
         for(int i=1;i<=x;i++){
             
             for(int j=1;j<=x;j++){
                if(i==1+count || i==x-count){
                    cout<<n;
                }else if (j==1+count || j==x-count){
                    cout<<n;
                }else{
                    cout<<" ";
                }
                }
                    cout<<endl;
         }n--;
         count++;
         }
      
         

    return 0;
}