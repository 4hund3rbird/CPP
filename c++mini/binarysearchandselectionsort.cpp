#include <bits/stdc++.h>
using namespace std;

void print(int array[],int n,int key)
{
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
          if(array[j]<array[i])
          {
              int swap;
              swap=array[i];
              array[i]=array[j];
              array[j]=swap;
          }
      }
  } for(int i=0;i<n;i++)
  {
      cout<<array[i]<<" ";
  }
  }

int search(int array[],int n,int key){
    int s=0;
    int e=n;

    for(int i=s;i<n;i++){
        int mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }else if(array[mid]>key){
            e=mid-1;
       }else{
            s=mid+1;
       }
        
    }
}


int main(){
    int n;
    cin>>n;

int array[n];
  for(int i=0;i<n;i++)
  {
      cin>>array[i];
  }
int key;
  cin>>key;
   
   print(array, n, key);
   cout<<endl;
   cout<<search(array,n,key);
  

 return 0;
}