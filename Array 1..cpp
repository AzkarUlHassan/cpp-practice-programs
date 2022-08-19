#include<iostream>
using namespace std;
int main()
{
	int t[7];
	int sum=0;
	for(int a=0;a<=6;a++)
	{
		cout<<"Enter temperature for day"<<a+1<<"is ";
		cin>>t[a];
		sum+=t[a];
	}
	for(int a=0;a<=6;a++)
		cout<<"The temperature of day "<<a+1<<"is "<<t[a]<<endl;
	    cout<<"The average temperature is "<<sum/7;
}

