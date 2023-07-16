#include<iostream>
#include<algorithm>
#include<vector>
#include<conio.h>
using namespace std;

void enterdata();
void searchdata(vector<string>);
void sortdata(vector<string>);
void show(vector<string>);

int main(){
	
	enterdata();
	return 0;
}

void enterdata()
{

	int n;
	cout<<"Enter no of names to be stored in record -->"<<endl;
	cin>>n;
	vector<string>name_data;
	
	for(int i=0;i<n;i++)
	{
		string name;
		cout<<"Enter name "<<i<<" ->"<<endl;
		cin.ignore();
		getline(cin,name);
		name_data.push_back(name);
	
	}
	searchdata(name_data);
}
void searchdata(vector<string>data)
{
	string key;
	cout<<"Enter name to be search"<<endl;
	cin>>key;
	
	if(binary_search(data.begin(),data.end(),key)){
		int i=binary_search(data.begin(),data.end(),key);
		cout<<"Given name is in record at index --> "<<i<<endl;
	}else{
		cout<<"Given name is not in records!!!\a"<<endl;
	}
	sortdata(data);
}
void sortdata(vector<string>data)
{	
	cout<<"Press Enter to sort the given data"<<endl;
	int n=getch();
	sort(data.begin(),data.end());
	cout<<"Sorted data -->"<<endl;
	
	show(data);

}
void show(vector<string>data)
{
	for(string val:data)
		cout<<val<<" ";
}


























