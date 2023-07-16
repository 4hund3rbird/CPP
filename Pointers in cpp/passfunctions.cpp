#include<iostream>
using namespace std;
void inc(int *ptr)
{
    ++*ptr;
}
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    // int b=10;
    // inc(&b);
    // cout<<b;
    int a=100,b=1000;
    swap(&a,&b);
    cout<<a<<"\n"<<b;

    return 0;
}