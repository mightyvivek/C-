//wap for displaying Name, roll, contact of a student
#include<iostream>
using namespace std;
struct stu
{char stu_name[40];
int stu_roll;
int contact;
public:
	void put_data();
	void display()
	{cout<<"\nstu_name: "<<stu_name;
	cout<<"\nstu_roll: "<<stu_roll;
	cout<<"\ncontact: "<<contact;
	}
};
void stu::put_data()
{cout<<"Enter stu_name: ";
cin>>stu_name;
cout<<"Enter stu_ roll: ";
cin>>stu_roll;
cout<<"Enter contact: ";
cin>>contact;
}
int main()
{
stu p;
p.put_data();
p.display();
cout<<sizeof(stu);
}

