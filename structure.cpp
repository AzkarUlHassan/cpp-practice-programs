#include<iostream>
using namespace std;
struct person
{
	string name;
	int age;
	float salery;
};
int main()
{
	person p1;
	cout<<"Enter your name here ";
	getline(cin,p1.name);
	cout<<"Enter your age ";
	cin>>p1.age;
	cout<<"Enter your salery ";
	cin>>p1.salery;
	
	cout<<"\n\nInformation\n";
	cout<<"\tName "<<p1.name<<endl;
	cout<<"\tAge "<<p1.age<<endl;
	cout<<"\tSalery "<<p1.salery;
}

