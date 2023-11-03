#include <iostream>
using namespace std;
inline int cube(int);
int main()
{
	int cub;
	cout<<"Enter the cube :"; 
	cin>>cub;
	cout<<"Cube of the number is ::"<<cube(cub)<<endl;
	return 0;
}
int cube(int c)
{
	return c*c*c;
}

