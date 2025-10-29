#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"insert value : ";
	cin>>x;
	if(x%2==0)
	{
		cout<<x<<" Even number\n";
		
		if(x>0)
		{
			cout<<x<<" Positive number\n";
	
		}
			if(x<0)
		{
			cout<<x<<" negative number\n";
		}
		
	}
	
	else if(x%2!=0)
	{
			cout<<x<<" Odd number\n";
		if(x<0)
		{
			cout<<x<<" negative number\n";
		}
		if(x>0)
		{
			cout<<x<<" positive number\n";
		}
	}		
	else
	{
		cout<<"zero";
	}
}
