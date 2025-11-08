#include<iostream>
using namespace std;
int main()
{
	int x,charges;
	cout<<"Weight of packages : ";
	cin>>x;
	if(x>=1&&x<=2)
	{
		cout<<"$1.50 charges";
	}
	else if(x>2&&x<=6)
	{
		cout<<"$3.00 charges";
	}
	else if(x>6&&x<=10)
	{
		cout<<"$3.00 charges";
	}
	else if(x>10)
	{
		cout<<"S4.75";
	}
}
