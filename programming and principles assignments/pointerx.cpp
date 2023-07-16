#include<iostream>
using namespace std;
int main()
{
    int arr1[4]={6,1,3,7};
    int num=100;
    int *ptr;
    ptr=&num;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    
    ptr=&arr1[0];
    for(int i=0;i<4;i++)
    {
       cout<<&arr1[i]<<endl;
    }
    return 0;
}