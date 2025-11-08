#include<iostream>
using namespace std;
int main()
{
	int total=0,pac,dis;
	cout<<"Packages purchases : ";cin>>pac;
	if(pac>=10&&pac<=19)
	{
		total=pac*99;
		dis=total*0.10;
		cout<<"Total : "<<total<<endl;
		cout<<"Discount : "<<dis<<endl;
		cout<<"After Discount : "<<total-dis<<endl;
	}
	else if(pac>=20&&<=49)
	{
		total=pac*99;
		dis=total*0.20;
		cout<<"Total : "<<total<<endl;
		cout<<"Discount : "<<dis<<endl;
		cout<<"After Discount : "<<total-dis<<endl;
	}	
	else if(pac>=50&&pac<=99)
	{
		total=pac*99;
		dis=total*0.30;
		cout<<"Total : "<<total<<endl;
		cout<<"Discount : "<<dis<<endl;
		cout<<"After Discount : "<<total-dis<<endl;
	}
	else if(pac>=100)
	{
		total=pac*99;
		dis=total*0.40;
		cout<<"Total : "<<total<<endl;
		cout<<"Discount : "<<dis<<endl;
		cout<<"After Discount : "<<total-dis<<endl;
	}
}
