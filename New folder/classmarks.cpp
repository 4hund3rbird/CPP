#include <bits/stdc++.h>
using namespace std;

int main(){
    int students;
    cout<<"enter no of students: ";
    cin>>students;
    string name[students];
    int marks[students][5*students]; //2d array

    for(int i=1;i<=students;i++){
        cout<<"enter name of the student "<<i<<endl;
        cin>>name[i-1];
        for(int j=1;j<=5;j++){
              cout<<"enter marks for sub "<<j<<endl;
             cin>>marks[i-1][j-1];
        }
    }
    int m=0;      //----------------------------------it is for max marks
    string topp;
     for(int i=0;i<students;i++){
        for(int j=0;j<5;j++){
                m=max(m,marks[i][j]);
        } 
    }   int tos;          
     for(int k=0;k<students;k++){
         for(int l=0;l<5;l++){
             if(m==marks[k][l]){
                 topp=name[k];
                tos=l+1; 
             }
         }
    }
    cout<<"the topper is "<<topp<< " in subject "<<tos<<" with marks "<<m<<endl; 

    for(int i=0;i<students;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                if((marks[i][j])<(marks[i][k])){
                    int swap=marks[i][j];
                    marks[i][j]=marks[i][k];
                    marks[i][k]=swap;
                }
            }

        }
    }
    for(int i=0;i<students;i++){
        for(int j=0;j<5;j++){
            cout<<marks[i][j]<<" ";
        }cout<<endl;
    }
    














    return 0;
}