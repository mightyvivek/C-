//early binding or compile time binding
#include<iostream>
using namespace std;
class Armory
{
	public:void guns()
	{cout<<"Original!! Be Aware"<<endl;}
};
class toys:public Armory
{
	public:void guns()
	{cout<<"Just for fun"<<endl;}
};
int main()
{
	Armory *a;
	toys t;
	a=&t;
	a->guns();
}
