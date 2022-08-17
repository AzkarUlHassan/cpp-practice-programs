#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	char ch; 
	system("cls");
	int a;
	int b;
	int root;
	int condition;
    cout<<"Please Enter first value\n";
    cin>>a;
    cout<<"Please Enter second value\n";
    cin>>b;
    cout<<"Please Enter your choice:\nFor Addition\t\t1\n"<<"For Substraction\t2\n"<<"For Multiplication\t3\n"
	<<"For Checking Max Value\t4\n"<<"For Checking Mini Value\t5\n"<<"For Checking Sqrt of 1st Value\t6\n"
	<<"For Checking Sqrt of 2nd Value\t7\n"<<endl;
	cin>>condition;
	switch(condition)
	{
		case 1:
			cout<<"The sum is "<<a+b;
			break;
	    case 2:
	    	cout<<"The subtraction is "<<a-b;
	    	break;
	    case 3 :
	    	cout<<"The result is "<<a*b;
	    	break;
	    case 4:
	    	if(a>b)
	    	{
	    		cout<<"A has maximum value "<<a;
			}
	    	else
	    	{
	    		cout<<"B has maximum value "<<b;
			}
			break;
			
	    case 5:
	    	if(a<b)
	    	{
	    		cout<<"A has minimum value "<<a;
			}
	    	else
	    	{
	    		cout<<"B has minimum value "<<b;
			}
			break;
		case 6:
			cout<<sqrt(a);
			break;
		case 7:
			cout<<sqrt(b);
			break;
		default :
			cout<<"Please enter 1-6";
	        cout<<"\nDo you want to continue then press c or C";
	        cin>>ch;
			}
		while(ch=='c'||ch=='C');	
	

return 0;
}

