#include<iostream>
using namespace std;
int main()
{
int sum=0,num,d=0;
cout<<"enter the number";
cin>>num;
while( num != 0)
    {
		d=num%10;
		sum=sum+d;
		num=num/10;
	}
	cout<<"result is"<<sum;
}
