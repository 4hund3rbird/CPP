#include<bits/stdc++.h>
#include<string>
using namespace std;

void numprint(string num){
    for(int i=0;i<num.length();i++){
        for(int j=i;j<num.length();j++){
            string numpi="@";
            if(num[i]==','){
                break;
            }else{
                numpi+=num[i];
                
            }
        }
       
        }
    }
    


int main(){
    string num="1,2,33,44,55,6,66,777,8,999";
    numprint(num);

     
    return 0;
}

