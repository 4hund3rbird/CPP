#include<iostream>
#include<windows.h>
#include<fstream>
#include<conio.h>
#include<iomanip>
using namespace std;

#define space 32 

const int row = 15;
const int col = 30;
bool complete = false;
int n=0;
void booking(char seats[][col],int rows);
void reset(char seats[][col],int rows);


void drawseats(char seats[][col],int row)
	{	
		while(n<5)
		{system("cls");
		
		 
		for(int i=0;i<15;i++)
		{	
			if(i>9)
			cout<<"Row  "<<i<<"  ";
			else
			cout<<"Row  "<<i<<"   ";
			for(int j=0;j<30;j++)
			{
				cout<<seats[i][j];
			}cout<<endl;
		}
		booking(seats,row);
		
		n++;
		}
}
struct position
{
	int seat_x;
	int seat_y;
};
void booking(char seats[][col],int row)
{
	position one;
	cout<<"Enter the position of booking"<<endl;
	cin>>one.seat_x>>one.seat_y;
	for(int i=0;i<row;i++)
		{	
			for(int j=0;j<col;j++)
			{
				if(i==one.seat_x && j ==one.seat_y)
				{
					seats[i][j]='*';
				}
			}
		}
}

int main()

{	char seats[15][30]={};

	ifstream readfile("seatsof.txt");
	for(int i=0;i<row;i++)
	{
			string mytxt;
			getline(readfile,mytxt);
			for(int j=0;j<col;j++)
			{
				seats[i][j]=mytxt[j];
			}
		
	}
	
	
	drawseats(seats,row);
	
	

	
	
		ofstream infile("seatsof.txt");
		for(int i=0;i<row;i++)
		{
				
				for(int j=0;j<col;j++)
				{
					infile<<seats[i][j];
				}
			infile<<"\n";
		}

	return 0;
}
void reset(char seats[][col],int row)
{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				seats[i][j]='#';
			}
		}
}