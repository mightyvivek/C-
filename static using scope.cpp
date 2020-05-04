//static
#include<iostream>
using namespace std;
class test{
	static int X;
	public:
		static int y;
		void fn(int X)
		{cout<<test::X;
		cout<<X;
		}
};
int test::X=1;
int test::y=2;
int main(){
	test obj;
	int X=3;
	obj.fn(X);
	cout<<test::y;
}
