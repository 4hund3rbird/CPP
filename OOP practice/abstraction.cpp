#include<iostream>
using namespace std;
namespace abc
{
    string name="aniket";
}
using namespace abc;

struct mat
{
    int row;
    int col;
};

int main()
{
    mat matrix[5];
    for(int i=0;i<5;i++)
    {
        cin>>matrix[i].row>>matrix[i].col;
    }
    for(int i=0;i<5;i++)
    {
        cout<<matrix[i].row<<matrix[i].col<<endl;
    }
  
}