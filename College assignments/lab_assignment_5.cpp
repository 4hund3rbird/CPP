#include<iostream>
#include<vector>
using namespace std;
float* selection_sort(float[],int);


void normal_array_input(string type)
{
    int n;
    cout<<"\tEnter size of "<<type<<" array"<<endl;
    cin>>n;
    float arr[n];
    cout<<"\tEnter elements of "<<type<<" array ,separated by space"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    float* ptr=selection_sort(arr,n);
    cout<<"------------------------------------------------>"<<endl;
    cout<<">sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }
}
float* selection_sort(float arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    return arr;
}

int main()
{   
    int dec;
    cout<<"\t press 0 to sort integer array"<<endl;
    cout<<"\t press 1 to sort float array"<<endl;
    cin>>dec;
    if(dec==0)
    { 
        normal_array_input("integer");
    }
    else if(dec==1)
    {
        normal_array_input("float");
    }else{
        cout<<"!!!Invalid Input!!!"<<endl;
    }
    
    
    return 0;
}