#include<iostream>
#include<iomanip>
using namespace std;
void line();
void line()
{
	cout<<endl;
	for(int a=1; a<=46;a++)
    cout<<"\xCD";
    cout<<endl;
}
int main()
{
line();
cout<<"Hello";
line();
cout<<"I am C++ program";
line();
cout<<"Why are you reading me";
line();
cout<<"If you dont know about function then read my code";
line();
return 0;
}

