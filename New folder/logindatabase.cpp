#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
string username (string domain){
      string domain1="o";
      string domainte="o@gmail.com";

      int size=domain.length();
      int x=size-10;
      while(x<=size){
      domain1=domain1+domain[x];
      x++;
       }
       int res=
      domainte.compare(domainte);
      if(res==0){
            cout<<"it is equal";
      }
 }


int main(){
   string dom;
      
  cout<<"enter domain here: ";
  cin>>dom;
  cout<< username(dom);
  





     return 0;
}