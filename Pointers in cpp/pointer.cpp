#include<iostream>
using namespace std;
int main()
{   
    int a;
    int *p;
    p=&a;
    a=10;
    cout<<p<<endl;
    cout<<p+1;
    cout<<*p+1<<endl;
    cout<<*p;
    return 0;
}