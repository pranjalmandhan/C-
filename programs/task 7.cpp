#include<iostream>
using namespace std;
int main()
{
	int x,y;
	string z;
	cout<<"Customer ID : ";
	cin>>x;
	cout<<"Customer name : ";
	cin>>z;
	cout<<"Customer's Units : ";
	cin>>y;
	
	if(y>0 && y<=199)
	{
		cout<<"Total amount : "<<y*5;
	}
	else if(y>199 && y<=399)
	{
		cout<<"Total amount : "<<y*10;
	}
	else if(y>399 && y<=599)
	{
		cout<<"Total amount : "<<y*15;
	}
	else if(y>600)
	{
		cout<<"Total amount : "<<y*20;
	}
	else
	{
		cout<<"your input  is invalid";
	}
}
