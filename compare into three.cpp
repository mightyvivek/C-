//Wap to find the greatestest from three.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the three no: ";
	cin>>a>>b>>c;
	if(a>b&&a>c)
	{cout<<a<<" is the greatest no";}
	else if(b>c&&b>a)
	{cout<<b<<" is the the greatest no ";}
	else if(c>b&&c>a)
	{cout<<c<<" is the greatest no";}
	else if(a==b==c)
	{cout<<"Numbers are equal";}
	else
	{cout<<"Yeah you found the bug!";}
}
