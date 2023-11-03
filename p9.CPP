#include<iostream>
using namespace std;

int x=11; // Global x

int main()
{
int y = 10; // Local x
cout << "Addition using scope resolution :: " << y+::x;
return 0;
}
