#include<iostream>
using namespace std;
class Myclass
{
	public:
			static int staticVar;
			static void printstaticVar()
{
	cout<<"The value of static integer ::"<<staticVar<<endl;
}
};
int Myclass::staticVar =10;
int main()
{
	Myclass::printstaticVar();
	return 0;
	
}
