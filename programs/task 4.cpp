#include<iostream>
using namespace std;
int main()
{
	int x,y;
	char z;
	cout<<"Insert first number : ";
	cin>>x;
	cout<<"Insert operator : ";
	cin>>z;
	cout<<"Insert second number : ";
	cin>>y;
	if(z=='+')
	{
		cout<<x<<z<<y<<" = "<<x+y;
	}
	else if(z=='-')
	{
		cout<<x<<z<<y<<" = "<<x-y;
	}
	else if(z=='*')
	{
		cout<<x<<z<<y<<" = "<<x*y;
	}
	else if(z=='/')
	{
		cout<<x<<z<<y<<" = "<<x/y;
	}
	else
	{
		cout<<"inserted operator is invalid";
	}
}
