#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{   cout<<add(a,b);
    return a-b;
}

int main()
{
    cout<<sub(3,5);
    return 0;
}