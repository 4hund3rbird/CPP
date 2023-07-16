#include<windows.h>
#include<bits/stdc++.h>
using namespace std;
void random()
{
   

	srand(time(0));

	for(int i = 0; i<4; i++)
		printf(" %d ", rand());

	


   
}
void draw(){
    while(1)
    {
    system("cls");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<20;j++)
        {if(i==0 || i==9 || j==0 || j==19)
            cout<<"#";
            
         else if(j<20 && j>0)
            cout<<" ";   
        }cout<<endl;
    }
    }
}
void movement()
{   system("cls");
    for(int i=0;i<=10;i++)
    {   
        Sleep(10);
        cout<<"*";
    }
}
int main(){
    random();
   
    return 0;
}