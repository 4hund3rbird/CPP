#include <bits\stdc++.h>
using namespace std;
int main(){
    int n=5;
    int b=2*n-1;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=b;j++){
            if(i==1 || i==b){
                cout<<n;
            }else if(j==1 || j==b){
                cout<<n;
            }else {
                cout<<" ";
            }
        }cout<<endl;
    }
return 0;
}