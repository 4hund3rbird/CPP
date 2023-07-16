#include <bits/stdc++.h>
using namespace std;
int main(){
     int num[10]={5,3,7,5,9,0,1,4,10,11};
     int m=num[0];
     for(int i=0;i<=10;i++){
         m=max(m,num[i]);
     }
      cout<<m;
    return 0;
}