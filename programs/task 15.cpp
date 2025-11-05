#include<iostream>
using namespace std;
int main()
{
	int salary,hra,da,gross;
	cout<<"insert your basic salary : ";
	cin>>salary;
	if(salary<=10000)
	{
		hra=salary*0.20;
		da=salary*0.80;
		gross=salary+hra+da;
		cout<<endl<<"your gross salary is : "<<gross;
	}
	else if(salary<=20000)
	{
		hra=salary*0.25;
		da=salary*0.90;
		gross=salary+hra+da;
		cout<<endl<<"your gross salary is : "<<gross;
	}
	else
	{
		cout<<"your input is invalid";
	}
}
