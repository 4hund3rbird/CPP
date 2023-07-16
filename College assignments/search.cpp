#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<string>arr;
	for(int i=0;i<5;i++)
	{
		string name;
		cin>>name;
		arr.push_back(name);
	}
	int i=binary_search(arr.begin(),arr.end(),"aniket");
	cout<<i<<endl;
	cout<<i<<endl;
	if(binary_search(arr.begin(),arr.end(),"aniket")){
		cout<<"name found"<<endl;
	}
	sort_heap(arr.begin(),arr.end());
	for(string val:arr)
		cout<<val<<endl;
}