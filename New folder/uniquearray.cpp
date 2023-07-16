#include <iostream>
#include <fstream>
using namespace std;

int main(){
//input array should contain an unique element
int size=12;
int nums[size]={1,2,3,4,5,6,7,6,5,4,3,2,1};
for(int i=0;i<=size;i++){
        int count=0;
     for(int j=0;j<=size;j++){
             if(nums[i]==nums[j]){
                 count++;  //counter to count how many times a no is repeated
              }
         }
     if(count==1){     //if it is repeated only once
         cout<<nums[i];
         }
   }
  return 0;
}