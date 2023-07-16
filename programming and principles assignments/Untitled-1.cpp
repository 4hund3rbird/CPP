#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

    


int main() {
   string m="11,2,3,4,5,6,7,8,9,0";
   stringstream ss;
   ss<<m;
   int n,a,b,d;
   char c;
  ss>>a>>c>>b>>c>>d>>c;
  cout<<a<<b<<d;
    return 0;
}

