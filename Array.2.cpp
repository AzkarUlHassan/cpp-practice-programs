#include<iostream>
using namespace std;
int main()
{
int a[5],b[5];
for(int n=0;n<=4;n++)
{
	cout<<"Enter value in element no "<<n+1<<" ";
	cin>>a[n];
	b[n]=a[n]*a[n];
}
    cout<<"Array A\tArray B"<<endl;
    for(int n=0;n<=4;n++)
    cout<<a[n]<<"\t"<<b[n]<<endl;
}

