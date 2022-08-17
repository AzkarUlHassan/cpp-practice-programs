#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
int i;
cout<<"Enter your age :\n";
cin>>i;
if(i<18)
{
	cout<<"This content is sensitive for you : \n";
}
else
{
	cout<<"Your illigible to access this website\n";
}

return 0;
}

