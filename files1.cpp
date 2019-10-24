/*
Data file handling using open function in c++
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char name[30];
	cout<<"Enter your name:";
	cin>>name;

	ofstream outf;
	outf.open("filez1.txt");
	outf<<name;
	outf.close();
	

	outf.open("filez2.txt");
	outf<<name;
	outf.close();
	
	
	ifstream inf;
	inf.open("filez1.txt");
	inf>>name;
	cout<<"\nPrinting details of filez1:"<<name;
	inf.close();
	

	inf.open("filez2.txt");
	inf>>name;
	cout<<"\nPrinting details of filez2:"<<name;
	inf.close();
		
return 0;

}

