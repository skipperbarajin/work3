//crated by amirreza javadi in 11/11/2022
#include<iostream>
#include<cmath>
using namespace std;
//this program  understand what leap year:)
float day(float);
int main()
{
	float d,m,y;
	cout<<"\n Enter day and month and year:";
	cin>>d>>m>>y;
	cout<<"\n  number of day is:"<<(y*365)+(m*30)+d<<day(float());//tabe(fingilish)
	if(y /400==1||y/400==2||y/400==3||y/400==4||y/400==5||y/400==6||y/400==7||y/400==8||y/400==9)
	cout<<"\n this is leap year";
	else
	cout<<"\n this is not leap year";
	return 0;
}
float day(float d)//tabe
{
	float y,m ;
	return(y*365)+(m*30)+d;
}
