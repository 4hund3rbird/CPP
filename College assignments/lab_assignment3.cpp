#include<iostream>
#include<limits>
using namespace std;

template<class T>       
       
       
        T selection_sort()        //Template function
        {
        T a[10];
        T temp;
        for(int i=0;i<10;i++)        //Accepting elements
            {
                cout<<"a["<<i<<"]=";
                cin>>a[i];
            }
           
   
         for(int i=0;i<10;i++)            //Sorting logic
         {
              for(int j=i+1;j<10;j++)
              {
                   if(a[i]>a[j])
                   {
                        temp=a[i];
                        a[i]=a[j];
                       a[j]=temp;
                }
            }
         }

         for(int i=0;i<10;i++)        //Displaying logic
        {
            cout<<a[i]<<" ";
        }
        }


int main()
{
       
       
    cout<<"Integer sorting...\n";
   
    selection_sort<int>();
   
    cout<<"Floating sorting...\n";
   
    selection_sort<float>();
       
       
}
//
//-------------------------------------------------------------------------------
//
//Output
//
//[student@localhost ]$ g++ Selection.cpp
//[student@localhost ]$ ./a.out
//Integer sorting...
//a[0]=1
//a[1]=2
//a[2]=4
//a[3]=3
//a[4]=6
//a[5]=5
//a[6]=7
//a[7]=0
//a[8]=9
//a[9]=8
//0
//1
//2
//3
//4
//5
//6
//7
//8
//9
//Floating sorting...
//a[0]=9.7
//a[1]=6.3
//a[2]=5.4
//a[3]=8.6
//a[4]=3.2
//a[5]=1.2
//a[6]=4.3
//a[7]=7.3
//a[8]=9.5
//a[9]=8.6
//1.2
//3.2
//4.3
//5.4
//6.3
//7.3
//8.6
//8.6
//9.5
//9.7
//[student@localhost ]$
