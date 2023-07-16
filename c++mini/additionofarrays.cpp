#include <bits/stdc++.h>
using namespace std;

 int rr[n];
int rrsort(){
    
    for(int j=1;j<n;j++){
    for(int i=0;i<n;i++){
        if(rr[i]>rr[i+1]){
            int swp=rr[i];
            rr[i]=rr[i+1];
            rr[i+1]=swp;
        }
    }return rr[];
    }
    
}
int min(){
   
for(int i=0;i<n;i++){
    continue>>rr[i];
}
 cout<<rrsort(rr,n);
    return 0;
}