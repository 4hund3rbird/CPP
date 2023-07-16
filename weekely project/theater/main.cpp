//Header file section---------------------------------------------------------------------------------------------------------------------
#include<iostream>
#include<windows.h>
#include<fstream>
#include<conio.h>
#include<iomanip>
using namespace std;
//Define characters section---------------------------------------------------------------------------------------------------------------------
#define space 32 
#define enter 13
#define esc 27
//Global variable section---------------------------------------------------------------------------------------------------------------------
const int row = 15;
const int col = 30;

//function declaration section---------------------------------------------------------------------------------------------------------------------
void menu(char[][col],int);
void admin(char[][col],int);
void showtimes(char[][col],int);
void drawseats(char[][col],int);
void bookingcounter(char[][col],int);
void totalgross();
void backmenu();
//Main function section---------------------------------------------------------------------------------------------------------------------
int main()
{	
	char seats[row][col]={};
	menu(seats,row);
	
	return 0;
}
//Function section---------------------------------------------------------------------------------------------------------------------
void menu(char seats[][col],int)
{	
	
	while(true)
	{	
		system("cls");
		cout<<"ABC cinemas@c.pvt ltd."<<endl;
		cout<<"\nfor admin details enter space.\nfor booking counter press enter."<<endl;
		
		
		int c = getch();
		if (c==space)
		{
			admin(seats,row);
			
		}else if(c==enter)
		{
		    showtimes(seats,row);
			break;
		}else
		{
			cout<<"\a!!!Invalid Input!!!"<<endl;
			int c = getch();
		}
	}
	//return nothing
}

void admin(char seats[][col],int)
{	fstream showdata;
	showdata.open("Showtimes.txt",ios::in|ios::app);
	while(true)
	{	system("cls");
		
		cout<<"Press enter to enter show details"<<endl;
		cout<<"\nPress esc to go back to the menu"<<endl;
		int c = getch();
		if(c == esc)
		{ 
			menu(seats,row);
			break;
		}
		
		else if(c == enter)
		{	int shownum;
			system("cls");
			cout<<"Enter no of shows: "<<endl;
			cin>>shownum;
			for(int i=0;i<shownum;i++)
			{	
				string showname;
				string showtime;
				cin.get();
				
				cout<<"Write show name"<<endl;
				cin.ignore();
				getline(cin,showname);
				

				cout<<"Enter show time and date in dd/mm/yy-hh/mm"<<endl;
				getline(cin,showtime);
				showdata<<showname<<"-"+showtime;
			}
			
		}else
		{	cout<<"\a!!!Invalid Input!!!"<<endl;
			int c = getch();
		} 
	}	showdata.close();
	
}

void showtimes(char seats[][col],int)
{
	//do nothing
}