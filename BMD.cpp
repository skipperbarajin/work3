#include<iostream>
#include<cmath>
using namespace std;
float BMD (float);
float status(float);
int main()
{
float w,h,x;
cout<<"\n Enter your weight:";
cin>>w;
cout<<"\n Enter your height:";
cin>>h;
cout<<"\n your BMD is:"<<BMD (w)<<w/(pow(h,2));
cout<<"\n enter your bmd";
cin>>x;
cout<<"\n your status is:"<<status(x);
return 0;
}
float BMD (float w)
{
float h,x;
return w/(pow(h,2))==x;	
}
float status(float x)
{
if(x<18.5)
    cout<<"\n under weight";
else if(18.5<x<24.9)
    cout<<"\n normal";
else if(25<x<29.9)
    cout<<"\n over weight";
else if(x>30)
    cout<<"\n obese";
}