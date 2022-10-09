#include <iostream>
using namespace std;
int main()
{
	long digit;
	cout<<"Entre digit=";
	cin>>digit;
	
	long A;
	cout<<"Entre value of A=";
	cin>>A;
	
	long B;
	cout<<"Entre value of B=";
	cin>>B;
	
	long C;
	cout<<"Entre value of C=";
	cin>>C;
	
	long D;
	cout<<"Entre value of D=";
	cin>>D;
	
	switch(digit)
	{
		case 6:
			cout<<"Value is=",  cout<<A ;
		break;	
		
		case 0:
			cout<<"Valuse is=", cout<<C;
		break;
		
		case 2 :
			cout<<"Valuse is=", cout<<C;
		break;
		
		case 3 :
			cout<<"Valuse is=", cout<<C;
		break;
		
		case 4:
			cout<<"Valuse is=", cout<<B;
		break;
		
		case 5 :
			cout<<"Valuse is=", cout<<B;
		break;	
		
		
		default:
		cout<<"Valuse is=", cout<<D;
		break;
		
	}
		
	return 0;
}







