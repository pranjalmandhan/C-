#include<iostream>
using namespace std;
int main()
{
	int x,factorial=1;
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		factorial*=i;
	}
	cout<<"Factorial of"<<x<<" is ="<<factorial;
}
