// 1 2 3 
// 4 5 6 
// 7 8 9

#include<iostream>
using namespace std;
int main()
{
//     int n,c;
//    cout <<"How Many No You Print:";
//     cin>>n;
// //    cout <<"How Row No You Print:";
//     // cin>>c;
//     int i=4;
//     int f=i+3;
//     for(i=1;i<n;i++){
       
//         if(i==f){
//             cout<<endl;
//         }
//         cout<<i<<" ";
        
//     }
    // for(int i=1;i<n;i+=c){
        
    //     for(int j=i;j<i+c;j++){

    //         cout<<j<<" ";20

    //     }cout<<endl;
    // }



// *
// **
// ***
// ****
// ****
// ***
// **
// *
int no;
cout<<" no of line print:";
cin>>no;
for(int i=0;i<no;i++)
{
    for(int j=0;j<no-i;j++)
    {
        cout<<'*';
    }
    cout<<endl;
}
    return 0;
}