#include<iostream>
using namespace std;
int g=5;
void fn(){
static int h=0;
cout<<g--;
cout<<"-"<<h++<<endl;
}
int main()
{while(g>=2){
	fn();
}
}
