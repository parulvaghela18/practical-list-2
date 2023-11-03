#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float km,cm,inch,meter,feet;
	cout<<"enter k.m.::";
	cin>>km;
	
	cm=km*100000;
	meter=km*1000;
	inch=km*39370;
	feet=km*3281;
	cout<<setprecision(2)<<fixed<<setfill('~');
	cout<<"km into cm:"<<setw(10)<<cm <<endl;
	cout<<"km into meter:"<<setw(10)<<meter <<endl;
	cout<<"km into inch:"<<setw(10)<<inch <<endl;
	cout<<"km into feet:"<<setw(10)<<feet <<endl;
	return 0;
}
