#include <iostream>
using namespace std;
int main(){
int n=;
int i;
int sum=0;
for(i=1;i<=n;i++){
    int j;
    for(j=2;j<=i;j++){
        if(i%j==0){
            break;
        }
    }
    if(i==j){
        if( n%i==0){
            sum=sum+i;
        }
    }
    }cout<<sum;

    return 0;}