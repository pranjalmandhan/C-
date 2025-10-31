#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if(x<y && x>z)
	{
		cout<<"Ascending order : "<<endl<<z<<endl<<x<<endl<<y;
	}
	else if(y<x && y>z)
	{
		cout<<"Ascending order : "<<endl<<z<<endl<<y<<endl<<x;
	}
	else if(z<x && z>y)
	{
		cout<<"Ascending order : "<<endl<<y<<endl<<z<<endl<<x;
	}
	
	else if(x>y && x<z)
	{
		cout<<"Ascending order : "<<endl<<y<<endl<<x<<endl<<z;
	}
	else if(y>x && y<z)
	{
		cout<<"Ascending order : "<<endl<<x<<endl<<y<<endl<<z;
	}
	else if(z>x && z<y)
	{
		cout<<"Ascending order : "<<endl<<x<<endl<<z<<endl<<y;
	}
	
}
