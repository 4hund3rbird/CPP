#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
   for(int i=0;i<10;i++){
       cout<<i<<endl;
       for(int j=i;j>=0;j--){
           cout<<j;
       }
   }
    return 0;
}