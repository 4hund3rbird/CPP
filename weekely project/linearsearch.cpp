#include<iostream>
using namespace std;


void linearsearch(int arr[],int size,int key)
{
	
	for(int i=0;i<size;i++)
		cout<<arr[i]<<endl;
}



int main()
{
	/* code */
	int size;
	int arr[size] ={1,2,3,4,5,6,7,8,9,0};
	int key=0;
	linearsearch(arr,size,key);
	return 0;
}