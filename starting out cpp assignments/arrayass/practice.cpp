#include<bits/stdc++.h>
using namespace std;
int main()
{	
int sma=INT_MAX,lar=INT_MIN;
	int food[5][3]={{82,55,45},
{39,12,11},
{52,33,02},
{75,54,23},
{45,11,456}};
	for(int i=0;i<3;i++)
{	int avg=0;
for(int j=0;j<5;j++)
{	
	     avg+=food[i][j];
		
sma = fmin(food[i][j],sma);

lar = fmax(food[i][j],lar);
}
cout<<avg/3<<endl;


}
cout<<sma<<endl;
cout<<lar<<endl;

  	return 0;

}
