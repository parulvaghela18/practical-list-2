#include<iostream>
using namespace std;
class temp
{
	public: 
			void show();
};
int main()
{
	temp a1;
	a1.show();
	return 0;
}
void temp :: show()
{
	cout<<"This program is used to declare function outside the class using scope resolution operator"<<endl;
}

