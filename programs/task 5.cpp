#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"first number : ";
	cin>>x;
	cout<<"second number : ";
	cin>>y;
	cout<<"third number : ";
	cin>>z;
	if(x>y && x>z)
	{
		cout<<x<<" :is greatest value  ";
	}
	else if(y>x && y>z)
	{
		cout<<y<<" :is greatest value  ";
	}
	else if(z>x && z>y)
	{
		cout<<z<<" :is greatest value";
	}
}
