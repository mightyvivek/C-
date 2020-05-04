#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"Enter your first number: ";
cin>>a;
cout<<"Enter your second number: ";
cin>>b;
a=a+b; 
b=a-b;   //swap(a,b)   
a=a-b;  
cout<<"First numbers after swapping: "<<a<<endl;
cout<<"Second number after swapping: "<<b;
}
