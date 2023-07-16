#include<iostream>
using namespace std;

struct rectangle
{
    float length;
    float breadth;
};

float area(float length ,float breadth)
{
    return length*breadth;
}

class Calculations
{
    public:
        float a;
        float b;

        Calculations(float A,float B)
        {
            a=A;
            b=B;
        }

        float addition()
        {
            return a+b;
        }

        float substraction()
        {
            return a-b;
        }

        float multiplication()
        {
            return a*b;
        }

         float division()
        {
            return a/b;
        }

        void all()
        {
            cout<<addition()<<endl;
            cout<<substraction()<<endl;
            cout<<multiplication()<<endl;
            cout<<division()<<endl;
        }
};      

int main()
{
    float m,n;
    cin>>m>>n;
    Calculations calci1=Calculations(m,n);
    calci1.all();
    return 0;
}
