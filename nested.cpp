#include<iostream>
using namespace std;
int main()
{int i=0;
int j=0;
float c=0;
cout<<"Enter the first no: ";
cin>>i;
cout<<"Enter the second no: ";
cin>>j;
c=i%j;
if(c==0){cout<<"Exactly Divisible";}
else if(c!=0){cout<<"it leaves reminde: "<<c;}
else{cout<<"Not divisible";}
return 0;
}

