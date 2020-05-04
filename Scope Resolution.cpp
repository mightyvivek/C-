//scope resulation
#include<iostream>
using namespace std;
string a = "hello global";
int main()
{
	string a = " hello local ";
	cout<<::a<<endl;
	cout<<a;
	return 0;
}
