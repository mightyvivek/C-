//encapsulation
#include<iostream>
using namespace std;
class Area
{
	float a,b;
	float result;
public:
	void get_data()
	{cout<<"Enter the Length: ";
	cin>>a;
	cout<<"Enter the breadth: ";
	cin>>b;
	}
	void dis_data()
	{result=a*b;
	cout<<"Area = "<<result;
	}
};
int main()
{Area A;
A.get_data();
A.dis_data();
return 0;
}

