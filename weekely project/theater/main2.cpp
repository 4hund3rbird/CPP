#include<iostream>
using namespace std;
void reverse(int ans[],int arrN[],int arrK[],int test)
{   for(int i=0;i<test;i++)
    
   {int n;
    int k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i;
    }
     
  
    int m=0;
    while(m<n)
    {
            for(int i=m;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {   switch(m%2)
                   { case 0:
                        if(arr[i]<arr[j])
                        {
                            swap(arr[j],arr[i]);
                        }
                        break;
                     default:
                        if(arr[i]>arr[j])
                        {
                            swap(arr[j],arr[i]);
                        }
                        break;}
                }
            }
            m++;
    }
   for(int i=0;i<n;i++)
   {
       if(arr[i]==k)
       {
        cout<<i<<endl;
        }
   }
   }
}

int main()
{
    int test;
    cin>>test;
    int arrN[test];
    int arrK[test];
    int t=1;
    int ans[test];
   
    while(t<=test)
    {
        cin>>arrN[t-1]>>arrK[t-1];
        t++;
    }
    reverse(ans,arrN,arrK,test);
   
    return 0;
}