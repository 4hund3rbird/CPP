//Write a program in C++ for Airline Reservation system . 
//The system should maintain an customer database in a file with customer information such as name, age, address, city , country , 
//phone number and traveling information like place of traveling and cost . 
//Use file handling to store customer information. 
//The code should throw an exception with the message "Exception thrown for age", if the customer is having age < 18. 
//Write the function’s for : a. adding new record b. 
//displaying all records c. searching for a particular customer d. updating customers info.
#include<iostream>
#include<fstream>
using namespace std;

class customer{
	public:
		string name,address,city,country,phnum,place_o_travel;
		int age,cost;
};
void add_new_record()
{
	fstream data;
	data.open("database.txt",ios::in|ios::app);
	cout<<"name==> "<<endl;
	cin.ignore();
		getline(cin,a.name);
	cout<<"age==> "<<endl;
	cin>>a.age;
		cout<<"address==> "<<endl;
	getline(cin,a.address)
		cout<<"city==> "<<endl;
	cin>>a.city;
		cout<<"country==> "<<endl;
	cin>>a.country;
		cout<<"phone number==> "<<endl;
	cin>>a.phnum;
		cout<<"place_o_travel==> "<<endl;
	cin>>a.place_o_travel;
		cout<<"cost==> "<<endl;
	cin>>a.cost;
	
	data<<a.name<<" - "<<a.age<<" - "<<a.city<<" - "<<a.country<<" - "<<a.phnum<<" - "<<a.place_o_travel<<" - "<<a.cost<<endl;
}
int main()
{
	add_new_record();
	return 0;
}
