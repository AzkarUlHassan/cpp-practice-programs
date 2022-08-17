#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
int i=1;
int j;
int k=1;
cout<<"Enter your number: \n";
cin>>j;
cout<<"Enter your limit\n";
cin>>k;
while(i<=k)
{
	cout<<j<<" X "<<i<<" = "<<i*j<<endl;
	i++;
}

return 0;
}

