//early binding or compile time binding
#include<iostream>
using namespace std;
class Armory
{
	public: void guns()
	{cout<<"Original!! Be Aware"<<endl;}
};
class toys:public Armory
{
	public:virtual void guns()
	{cout<<"Just for fun"<<endl;}
};
class games:public Armory
{public:void guns()
{cout<<"Ufff!!"<<endl;}
};
int main()
{
	Armory*a;
	toys t;
	games g;
	a=&t;
	a=&g;
	a->guns();
	return 0;
}

