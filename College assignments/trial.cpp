#include<iostream>
using namespace std;
class books{

    public:
        string title;
};
int main(){
    books book1;
    cout<<"enter title here"<<endl;
    getline(cin,book1.title);
    cout<<book1.title;
    return 0;
}