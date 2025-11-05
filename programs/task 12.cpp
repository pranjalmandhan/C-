#include<iostream>
using namespace std;
int main()
{
	//without third variable
	int x=10,y=70,z=30;
//	x=10+70;
//	y=x-70;
//	x=x-y;
//	cout<<"Before swamp :"<<"x = "<<x<<" & "<<"y = "<<y<<endl;
//	cout<<"x = "<<x<<endl<<"y = "<<y;
//	
	//using third variable
	cout<<"Before Swamp : "<<endl<<"x = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z<<endl;
	x=x+y+z;
	y=(x-y)-z;  //is equal to y=10;
	z=(x-z)-y; // is equal to z=70;
	x=(x-z)-y; // is equal to x=30;

	cout<<"y ="<<y<<endl;
	cout<<"x ="<<x<<endl;
	cout<<"z ="<<z;
	
}
