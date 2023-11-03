#include <iostream>
using namespace std;
inline int square(int);
int main()
{
	int s;
	cout<<"Enter the square ::"; 
	cin>>s;
	cout<<"Square of the number is ::"<<square(s)<<endl;
	return 0;
}
int square(int a)
{
	return a*a;
}

