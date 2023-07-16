#include<iostream>
using namespace std;
int * reverse(int arr[],int n,int i){
        if(i<n/2){
            int s=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=s;
        }
        // cout<<arr[i];
        if(i==n-1){
            return arr;
        }
        reverse(arr,n,++i);
}
int main(){
    // int n;
    // cin>>n;
    // int arr[n]={};
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int* b=reverse(arr,n,0);
    // for(int i=0;i<n;i++){
    //     cout<<*(b+i);
    // }

    int n_pl;
    cin>>n_pl;
    int j=1;
    int count=1;
    for(int i=9;i<=n_pl;i+=(9*j)){
        j*=10;
        count++;
        cout<<i<<endl;
    }
    if(n_pl-j!=0){
        count++;
    }
    cout<<count;
}