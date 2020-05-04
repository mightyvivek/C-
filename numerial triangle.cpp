//Numerical floid triangle
#include<iostream>
using namespace std;
int main()
{int i,j,n;
int p=0;
cout<<"Enter the length of floid Triangle: ";
cin>>n;
for(i=0;i<=n;i++)
{cout<<"\n";
for(j=0;j<=i;j++)
{cout<<" "<<p++;}
}
return 0;
}
