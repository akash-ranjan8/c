/*
C++ program using the concept of multilevel inheritance.
*/


#include<iostream>
using namespace std;

class stu
{
	int id;
	char name[20];
	public:
		void getdata()
		{
			cout<<"Enter name of student:";
			cin>>name;
			cout<<"\nEnter id of student:";
			cin>>id;
		}
		
		void putdata()
		{
			cout<<"\nName:"<<name;
			cout<<"\nid:"<<id;
		}
};

class marks:public stu
{
	protected:
		int m1,m2,m3;
		
	public:
		void getmarks()
		{
			cout<<"\nEnter marks in 3 subjects:\n";
			cin>>m1>>m2>>m3;
		}
		void putmarks()
		{
			cout<<"\nM1 ="<<m1;
			cout<<"\nM2 ="<<m2;
			cout<<"\nM3 ="<<m3;
		}
};

class result:public marks
{
	int total;
	float avg;
	public:
		void show()
		{
			total=m1+m2+m3;
			avg=total/3.0;
			cout<<"Total ="<<total<<endl;
			cout<<"Avg ="<<avg;
		}
};



int main()
{
	result r;
	r.getdata();
	r.getmarks();
	r.putdata();
	r.putmarks();
	
	r.show();
	return 0;
}
