#include <bits/stdc++.h>
using namespace std;
int main(){
    int num[3][3]{  
                    {2,5,14}, //student 1
                    {10,60,3},//student 2
                    {1,7,100},//student 3
                 };
                 int m=0;
                 string stu[3]={"student 1","student 2","student3"};
                 int count=0;
                 string topper;
     for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
                m=max(m,num[i][j]);
        } 
    }             
     for(int k=0;k<=2;k++){
         for(int l=0;l<=2;l++){
             if(m==num[k][l]){
                 topper=stu[k];
             }
         }
    }
    cout<<topper;


    return 0;
}