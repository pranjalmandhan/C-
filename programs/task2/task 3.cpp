#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Insert your marks(%) : ";
	cin>>x;
	if(x>=80 && x<=100)
	{
		cout<<"A grade";
	}
	else if(x>=70 && x<80)
	{
		cout<<"B grade";
	}
	else if(x>=60 && x<70)
	{
		cout<<"C grade";
	}
	else if(x>=50 && x<60)
	{
		cout<<"d grade";
	}
	else if(x<50)
	{
		cout<<"fail";
	}
	else
	{
		cout<<"your input is invalid";
	}
}
