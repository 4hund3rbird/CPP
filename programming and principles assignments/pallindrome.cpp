#include<iostream>
using namespace std;
int main()
{
    int arr1[]={6,1,3,7};
    int *ptr;
    ptr=&arr1[1];
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr;
    return 0;
}