//pointr 
#include<iostream>
using namespace std;
 
struct Rl_cde
{int x=100,y=200,z=300;
};
int main()
{Rl_cde r;
int *ptx,*pty,*ptz;
ptx=&r.x,pty=&r.y,ptz=&r.z;
cout<<"Pointer Adress->"<<ptx<<endl<<"Value="<<r.x<<endl<<endl; 
cout<<"Pointer Adress->"<<pty<<endl<<"Value="<<r.y<<endl<<endl;
cout<<"Pointer Adress->"<<ptz<<endl<<"Value="<<r.z<<endl<<endl;
return 0;
}
