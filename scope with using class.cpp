#include<iostream>
using namespace std;

class temp
{
	public:
		int a;
};
int a=10;
int main()
{
	int a=20;
	cout<<"Value of a is ::"<<::a<<endl;
	cout<<"Value of a is ::"<<a<<endl;
	return 0;
}
