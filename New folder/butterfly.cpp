#include <iostream>
using namespace std;
int main(){
 int n=10;

 for(int i=1;i<=n;i++){
     for(int j=1.;j<=i;j++){
         cout<<'*';
     }int space=2*n-2*i;
     for(space;space<=i;space++ ){
         cout<<" ";
     }
      for(int j=1.;j<=i;j++){
         cout<<'*';
     }
     cout<<endl;
 }
     for(int i=n;i>=1;i--){
     for(int j=1.;j<=i;j++){
         cout<<'*';
     }int space=2*n-2*i;
     for(space;space<=i;space++ ){
         cout<<" ";
     }
      for(int j=1.;j<=i;j++){
         cout<<'*';
     }
     cout<<endl;
 }






    return 0;
}