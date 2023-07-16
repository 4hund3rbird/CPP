#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
   int d;
   cin>>d;
   string in=to_string(d);
  
   int ans=1;
   for (int i=0;i<in.length();i++){
      
       ans*=d%10;
       
        d/=10;
        
   }
   cout<<ans<<endl;

    return 0;
}
