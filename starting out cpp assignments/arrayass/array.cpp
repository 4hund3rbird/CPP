#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int count=0,arraysize=10;
    int arr[arraysize];
    ofstream outputfile("numbers2.txt");
    
    for(count=0;count<arraysize;count++)
        arr[count]=count;
      

    for(count=0;count<arraysize;count++)
        outputfile<<arr[count]<<" ";

    outputfile.close();    
        

    ifstream inputfile;
    count=0;
    inputfile.open("numbers.txt");
    while(count<arraysize&& inputfile>>arr[count])
        count++;

    inputfile.close();
    for(int i =0;i<arraysize;i++)
        cout<<arr[i]<<" ";

    return 0;
}