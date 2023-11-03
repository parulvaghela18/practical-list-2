#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int swap;
	swap =*x;
	*x = *y;
	*y = swap;
}
int main()
{
		int x=10,y=20;
		swap(&x,&y);
		cout<<"Addition of X ::"<<x+y<<endl;
		return 0;
}
