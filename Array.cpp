//Array
#include<iostream>
using namespace std;
struct emp
{char emp_name[10];
int emp_code;
float emp_sal;
public:
	void put_data();
	void dis_data()
	{cout<<"\nEmployee Name: "<<emp_name;
	cout<<"\nEmployee Code: "<<emp_code;
	cout<<"\nEmployee Salary"<<emp_sal;
	}
};
void emp::put_data()
{cout<<"Enter Employee Name: ";
cin>>emp_name;
cout<<"Enter Employee Code: ";
cin>>emp_code;
cout<<"Enter Employee Salary: ";
cin>>emp_sal;
}
int main()
{struct emp arr[10];
arr[0].put_data();
arr[0].dis_data();
}
