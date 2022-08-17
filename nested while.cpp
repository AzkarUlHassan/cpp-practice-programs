#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
do
{
	system("cls");
	int n;
	cout<<"Enter your number : \n";
	cin>>n;
	for(int a=1;a<=20;a++)
	cout<<n<<" X "<<a<<" = "<<n*a<<endl;
	cout<<"Press c to continue\n";
    cin>>ch;
}
while(ch=='c');


return 0;
}

