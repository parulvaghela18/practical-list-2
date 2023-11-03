#include <iostream>
using namespace std;


int test(const int) ;
int main()
{
	cout<<"Enter value of Z ::"<<test(5)<<endl;
	return 0;
}
int test(const int z)
{
	return z;
}
