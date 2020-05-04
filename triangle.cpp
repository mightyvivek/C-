//floid triangle
#include<iostream>
using namespace std;
int main()
{int k,i,j;
for(i=1,k=0;i<=20;i++,k=0)
{
for(j=1;j<=20-i;j++)
{
cout<<"-";
}
cout<<"*";
while(k!=2*i-1)
{
	cout<<" "; 
	k++;	
}
cout<<"*";
for(j=1;j<=20-i;j++)
{
cout<<"-";
}
cout<<endl;
}

return 0;
}

