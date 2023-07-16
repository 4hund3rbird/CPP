#include <bits/stdc++.h>
using namespace std;
int main(){
    int binum;
    cin>>binum;
    int decimal;
    int val=0;
    for(int i=0;i<=binum+10;i++){
        decimal=binum%10;
        binum/=10;
        if(decimal==0){
          val+=0;
        }else{
            val=val+pow(2,i);
        }
    }
        
        
        cout<<val;
    return 0;
}