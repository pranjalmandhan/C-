#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"insert value : ";
	cin>>x;
	if(x%5==0 && x%11==0)
	{
		cout<<x<<" is divisable by 11 and 5";
	}
	else
	{
		cout<<x<<" is not divisable by 11 and 5";
	}
}
