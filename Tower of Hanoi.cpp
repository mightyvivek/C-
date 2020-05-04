#include<iostream>
using namespace std;
void toh(int n, char source,char dest,char aux)
{
	if(n==1){
	cout<<"move "<<n<<" from "<<source<<" to "<<aux<<endl;
	return;};
	toh(n-1,source,aux,dest);
	cout<<"Move "<<n<<" From "<<source<<" to "<<dest<<endl;
	toh(n-1,source,aux,dest);
	cout<<"Move "<<n<<" From "<<source<<" to "<<aux<<endl;
}
int main(){
	int n=4;
	toh(n,'a','b','c');
	}
