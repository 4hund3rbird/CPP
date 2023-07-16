#include<iostream>
using namespace std;
class rectangle
{
    public:
        int length;
        int width;
};
int main()
{
    rectangle rectangles[2];
    for(int i=0;i<2;i++)
    {
        cin>>rectangles[i].length>>rectangles[i].width;
    }
     for(int i=0;i<2;i++)
    {
       cout<<rectangles[i].length<<rectangles[i].width<<endl;
    }
    return 0;
}
