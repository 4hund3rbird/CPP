#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream infile;
    string student1,student2,student3;
    cin>>student1;
    cin>>student2;
    cin>>student3;
   infile.open("file.txt");
   infile<<student1<<endl;
   infile<<student2<<endl;
   infile<<student3;
   infile.close();
   ifstream outfile;
   string file;
   outfile.open("file.txt");
  while(outfile>>file){
      cout<<file;
  }
  outfile.close();
    return 0;
}