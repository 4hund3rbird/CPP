#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    string arrs[]={"mars","mercury",
                    "earth","pluto",
                    "saturn","neptune"};

    for(int val:arr)
        cout<<val<<endl;

    for(string planets:arrs)
        cout<<planets<<endl;    
    return 0;
}