#include<iostream>
using namespace std;
int main()
{
    int arr1[5]={1,2,3,4,5};
    int *arr_ptr=arr1;
    for(int i=0;i<5;i++)
    {
        cout<<*arr_ptr<<" -- "<<arr_ptr<<endl;
        *arr_ptr++;
    }
    
    return 0;
}