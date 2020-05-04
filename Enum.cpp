//enum
#include<iostream>
using namespace std;
enum colors
{red,blue,green,orange,black,yellow;
};
enum fruit
{apple,blueberry,guava,orange,graps,banana;
};
int main()
{
enum colors f=blue;
enum fruit g=blueberry;
if(f=g)
{cout<<"They are equal!";
else:
	cout<<"They are not equal";
}
cout<<f;
return 0;
}
