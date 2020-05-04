//floid triangle
#include<iostream>
using namespace std;
int main()
{int i,j,n;
cout<<"Enter the length of floid Triangle: ";
cin>>n;
for(i=n;i>=0;i--)
{cout<<"\n";
for(j=0;j<=i;j++)
{cout<<"* ";}
}
return 0;
}
