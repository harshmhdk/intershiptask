#include<iostream>
using namespace std;
int main()
{
	float n1,n2, ans;
	char op;
	cout<<"SIMPLE CALCULATOR";
	cout<<endl<<"| +  - |";
	cout<<endl<<"| *  / |";
	
	cout<<endl<<endl<<"Enter 1st no. = ";
	cin>>n1;
	
	cout<<endl<<"Enter 2nd no. = ";
	cin>>n2;
	
	cout<<endl<<"Select Operation = ";
	cin>>op;
	
	switch(op)
	{
	case '+' :
		ans = n1 + n2;
		cout<<"Addition of "<<n1<<" and "<<n2<<" = "<<ans;
		break;
	case '-' :
		ans = n1 - n2;
		cout<<"Subtraction of "<<n1<<" and "<<n2<<" = "<<ans;
		break;
	case '*' :
		ans = n1 * n2;
		cout<<"Multiplication of "<<n1<<" and "<<n2<<" = "<<ans;
		break;
	case '/' :
		ans = n1 / n2;
		cout<<"Division of "<<n1<<" and "<<n2<<" = "<<ans;
		break;
	default:
		cout<<"ERROR! Operator not found"<<endl;
	}
	return 0;
}
