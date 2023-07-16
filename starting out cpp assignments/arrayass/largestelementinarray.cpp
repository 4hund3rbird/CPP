#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,2,3,4,10,20,4};
    int max =INT_MIN;
    int min =INT_MAX;
    for(int i=0;i<7;i++){
        
        if(arr[i]>=max)
            max=arr[i];
        if(arr[i]<=min)
            min=arr[i]; 
    }cout<<max<<endl;
     cout<<min;
    return 0;
}

