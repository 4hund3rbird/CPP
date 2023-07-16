#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>value {1,1,2,3,3,4,5,5,66,6};
    // for(int i=0;i<=10;i++){
    //     int marks;
    //     cin>>marks;
    //     value.push_back(marks);
    // }
    for(int val : value)
    cout<<val<<endl;




    return 0;
}