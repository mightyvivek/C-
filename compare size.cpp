//wap to see the size of structure and union
#include<iostream>
using namespace std;
struct str_re
{char name[10];
int code;
public:
	void display()
	{cout<<"Name: "<<name<<endl;
	cout<<"code: "<<code<<endl;
    }
};
union uni_on
{char name[10];
int code;
};
int main()
{str_re s;
uni_on u;
cin>>s.name;
cin>>s.code;
cout<<"size is : "<<sizeof(s)<<endl;
s.display();
cin>>u.name;
cout<<"Name: "<<u.name<<endl;
cin>>u.code;
cout<<"code: "<<u.code<<endl;
cout<<"size is : "<<sizeof(u)<<endl;
}
