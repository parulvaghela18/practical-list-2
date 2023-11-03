#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float a=1234;
	cout<<"The value of a ="<<setfill('0')<<setw(6)<<a<<endl;
	return 0;
}
