/*------------------------------------------------------------------------------------------------------------------
Assignment 1
Sub -- OOP
Name -- Kshirsagar Aniket Balasaheb
Roll no -- S1411033
div-- SE_AI_DS
date-- 28/sep/2021
*///-----------------------------------------------------------------------------------------------------------------

#include <iostream>     //this is for standard input / output
#include <conio.h>      //this is for getch() function
#include<iomanip>       //this is for setw() function
#include<windows.h>     //this is for system("cls") function
using namespace std;
// It is to define value of space key which we will use later----------------------------------------------------
#define space 32

// These are function declaration which we will define after the main function-----------------------------------
float addition(float,float);
float substraction(float,float);
float multiplication(float,float);
float division(float,float);
void menu();


// This is main function-----------------------------------------------------------------------------------------
int main()
{   
    cout<<setw(50)<<"< This is a calculator program >"<<endl; // setw() is a function used to align text by width--
    cout<<setw(62)<<"< It can only operate Basic four functions >"<<endl;
    cout<<setw(82)<<"< which are addition ,substraction,multiplication and division >"<<endl;
    cout<<setw(44)<<"< Press any key to start >"<<endl;
    int c=getch();  // getch() is used for geting key values in integers------------------------------------------
   
    menu();  // This is the menu() which will handle all the functions---------------------------------------------

    return 0;
}

void menu()
{
    while(true)
     {  // system("cls");
        // we can uncomment system("cls") function if you want screeen to be clear after every operation-----------
        float a,b;
        char Operator;  // this variable will store our operator---------------------------------------------------
        cout<<"\n> Write your operation below "<<endl;
        cin>>a>>Operator>>b;
        switch(Operator)
        {
            case '+':
                cout<<'>'<<addition(a,b)<<endl;
                break;
            case '-':
                cout<<'>'<<substraction(a,b)<<endl;
                break;
            case '*':
                cout<<'>'<<multiplication(a,b)<<endl;
                break;
            case '/':
                cout<<'>'<<division(a,b)<<endl;
                break;
            default :        // if any other operator is pressed instead of given ones this block will execute----
                cout<<'>'<<"Invalid operation"<<endl;
                break;
        } 
          cout<<'\n'<<'>'<<"Press Space key to exit"<<endl;
          cout<<'>'<<"Press Any key to continue"<<endl;
          int c=getch(); // this block will continue the infinite loop of menu if continue------------------------
          if(c==space)
                break;
          else 
                continue;
          
    }
}
// these are all function definations------------------------------------------------------------------------------
float addition(float a,float b)
{
    return a+b;
}
float substraction(float a,float b)
{
    return a-b;
}
float multiplication(float a,float b)
{
    return a*b;
}
float division(float a,float b)
{
    return a/b;
}