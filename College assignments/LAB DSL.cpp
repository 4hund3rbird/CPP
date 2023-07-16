#include<iostream>
using namespace std;
int main()
{
    //basic pointer thing 
    // int a = 10;
    // int* aptr; // declaration of  a pointer
    // aptr=&a;//storing address of a to the pointer
    // cout<<*aptr<<" "<<aptr<<" "<<&a;
    //--------------------------------------------------
    //pointers with arrays
    // int arr[10]={2,3,4,2,5,7,5,5,3,5};
    // int *arr_ptr;
    // arr_ptr=arr;
    // cout<<arr_ptr<<endl;
    // cout<<*arr_ptr<<endl;
    // cout<<&arr_ptr<<endl;
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<*arr<<endl;
    // for(int i=0;i<10;i++)
    // {
    //     cout<<arr_ptr[i]<<endl;//array pointer works as an array
    //     cout<<*(arr+i)<<endl;//this is equal to arr[i]
    // }
     int arr1[2]={3,4};
     int arr2[4]={1,2,34,3};
     int arr3[1]={1};
     int * ptrs[3];
     ptrs[0]=arr1;
     ptrs[1]=arr2;
     ptrs[2]=arr3;
     
        //  cout<<ptrs[0]<<endl;
        //  cout<<*ptrs[0]<<endl;
        //  cout<<*(ptrs[0]+1)<<endl;
    int arr_size[3]={2,4,1};
    
    for(int i=0;i<3;i++)
    {   int n=arr_size[i];
        for(int j=0;j<n;j++)
        {
            cout<<*(ptrs[i]+j);
        }
        cout<<endl;
    }

    return 0;
}
