#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int num ,n=100,gues;
	num = (rand()%n)+1;
	cout<<" ||----NUMBER GUESSING GAME----||"<<endl<<endl;
	cout<<"Guess number between 1-100 = ";
	do
	{
		
	    cin>>gues;
		if(gues<num)
		{
		 cout<<endl<<"Try a bigger number = ";
		}
		else if(gues>num)
		{
		 cout<<endl<<"Try a smaller number = ";
		}
		else if(gues==num)
		{
		 cout<<"\n---------------------------------------\n";
		 cout<<endl<<"CONGRATULATION YOU WON!!!";
		 cout<<"\n---------------------------------------\n";
	    }
	}while(num!=gues);
	
	return 0;
}
