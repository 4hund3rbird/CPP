#include <bits/stdc++.h>
using namespace std;
int search(int array[],int index,int key){
    int s=0;
    int e=index;
     while(s<=e){
         int mid=(s+e)/2;
         if(array[mid]==key){
             return mid;
         }else if(array[mid]>key){
             e=mid-1;
         }else{
             s=mid+1;
         }
     }
     return -1;
   
      } 


int main(){
     int index;
     cin>>index;
    int array[index];
    for(int i=0;i<index;i++){
        cin>>array[i];
    }
    int key ;
    cin>>key;
   
    cout<<search(array,index,key);


    return 0;
}