#include <iostream>
using namespace std;
const int t_l=20;
class Hashtableentry
{
	private:
		int key;
		int value;

	public:

	Hashtableentry(int key, int value)
	{
		this -> key=key;
		this -> value=value;

	}
	
	void print_data();


};
class Hashmaptable
{
	private:
		int hashtable[t_l];
		
	public:
		Hashmaptable()
		{
			for(int i=0;i<t_l;i++)
			{
				
				hashtable[i]=0;
			}
		}
		int hashfunction(int v)
		{
			return v%10;
		}

		void insert(int value);
		void print_table();
} ;

void Hashmaptable::insert(int value)
{
	int index=hashfunction(value);
	hashtable[index]=value;
}

void Hashmaptable::print_table()
{
	for(int i=0;i<20;i++)
	{
		cout<<" key - "<<i<<" - Value - "<<hashtable[i]<<endl;
	}
}
void Hashtableentry::print_data()
{
	int keyvalue[2]={key,value};
	cout<<key<<value<<endl;
};

int main()
{
	Hashmaptable hash=Hashmaptable();

	hash.insert(1000);
	hash.insert(2190412);
	hash.insert(23497);
	hash.print_table();


}
