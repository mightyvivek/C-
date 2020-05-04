//swapping by dynamic memory allocation
#include<iostream>
using namespace std;
swap(char*m,char*n)
{char t;
t=*m;
*m=*n;
*n=t;
};
int main()
{char a,b;
cout<<"Enter your first number: ";
cin>>a;
cout<<"Enter your second number: ";
cin>>b;
swap(&a,&b);  
cout<<"First numbers after swapping: "<<a<<endl;
cout<<"Second number after swapping: "<<b;
}
