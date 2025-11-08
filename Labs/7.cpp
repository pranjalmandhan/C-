#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	switch(x)
	{
		case 0:
		cout<<x<<"books & he or she earns 0 points"<<endl;
		break;
		case 2:
		cout<<x<<"books & he or she earns 5 points"<<endl;
		break;
		case 4:
		cout<<x<<"books & he or she earns 15 points"<<endl;
		break;
		case 6:
		cout<<x<<"books & he or she earns 30 points"<<endl;
		break;
		case 8:
		cout<<x<<"books & he or she earns 60 points"<<endl;
	}
}
