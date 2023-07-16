#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int subarr[3]={1,2,3};
    for (int i=0;i<3;i++){
        for(int j=0;j<9;j++){
            if(subarr[i]==arr[j]){
                 int s=j;
                for(int k=j+1;k<9;k++){
                    arr[s]=arr[k];
                    s++;

                }
            }
        }

    }
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}



