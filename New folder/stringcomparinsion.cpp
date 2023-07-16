#include <iostream>
using namespace std;
string username(string q){
        string domain1="a";
      int size=q.length();
      int x=size-10;
      while(x<=size){
      domain1=domain1+ q[x];
      x++;
       }
    return domain1;
}



int main(){
    string domain="aniket@gmail.com";
    string domainrev="a@gmail.com";
    string domain2=username(domain) ;
  
    cout<<domainrev.compare(domain2)<<endl;
    cout<<domain2<<"\n";
    cout<<domainrev;
 
    return 0;
}
