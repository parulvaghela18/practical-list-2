#include <iostream>
//#define PI 3.14
using namespace std;
float area(float ,float PI=3.14);
int main()
{
	float rad;
	cout<<"Enter the radius :"; 
	cin>>rad;
	cout<<"Area of the circle is ::"<<area(rad)<<endl;
	return 0;
}
float area(float r, float PI)
{
	return PI*r*r;
}

