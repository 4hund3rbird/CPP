#include <iostream>
using namespace std;
int main()
{
    int key=7;
    int arr[5][5]=
    {{1,2,3,4,5},
     {5,3,45,7,54},
     {21,34,5,343,7},
     {43,45,34,54,65},
     {1,23,4,23,6}
     };
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==key)
            {
                arr[i][j]=0;
            }
          
        }
    }

   for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
           cout<<arr[i][j];
          
        }cout<<endl;
    }
    return 0;
}