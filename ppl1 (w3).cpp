#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	float result;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	cout<<"\nEnter operator : ";
	char op=getche();
	int flg=1;
	switch(op)
	{
		case '*':
			result=a*b;
			break;
		case '+':
			result=a+b;
			break;
		case '-':
			result=a-b;
			break;
		case '/':
			result=a/b;
			break;
		case '%':
			result=a%b;
			break;
		default:
			cout<<"incorrect number";
			flg=0;
			break;
	}
	if(flg==1)
	cout<<"\nResult = "<<result;

	return 0;
}
