#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;
int main(){
	char a[10];
	cin.get(a,10,2);
	cout<<a;
    // ofstream createfile("Showtimes.txt");

    // int shownum;
			
	// 		cout<<"Enter no of shows: "<<endl;
	// 		cin>>shownum;
    //         int n=0;
           
	// 		while(n<shownum)
	// 		{	cin.get();
	// 			string showname;
	// 			string showtime;
				
	// 			cout<<"Write show name,time and date in following format show name-dd/mm/yy-hh/mm-am/pm"<<endl;
	// 			getline(cin,showname);
                
				
    //             createfile<<"\n"+showname;
    //             n++;
	// 		}
    return 0;
}
/*
cin
It is used to read a word or character.
It terminates on encountering whitespace or endline charater (’\n’)

cin.get(char_array,number_of_characters,delimiter)
To read characters including special characters like ’ ', ‘\n’ and ‘\t’.

cin.getline(char_array,max_Size,delimiter)
It is used to read a sentence or a paragraph.
It terminates on encountering endline character.
It also reads the whitespace.
*/