#include<bits/stdc++.h>
using namespace std;
int main(){
    double arr[12]={};
    string months[12]={"January","February","March","April",
                        "May","June","July","August","September",
                        "October","November","December"};
    int lowest=INT_MAX;
    int highest=INT_MIN;
    double total=0;
    for(int i=0;i<12;i++){
        cout<<"Enter rainfall for "<<months[i]<<" ";
        cin>>arr[i];
        
        if(arr[i]<=lowest)
            lowest=i;
        if(arr[i]>=highest)
            highest=i;
        total+=arr[i];
                
    }
    cout<<"The Average Rainfall for the year "<<total/12<<endl;
        cout<< " The total rainfall for the year"<<total<<endl; 
            cout<<"highest rainfall is for"<<months[highest]<<endl;
            cout<<"lowest rainfall is for"<<months[lowest]<<endl;

    return 0;
}