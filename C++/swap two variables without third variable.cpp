#include <iostream>
using namespace std;

void swap(int a , int b,int num[])
{
    //swapping the values of two variables
    a=a+b;
    b=a-b;
    a=a-b;
    //assigning the new values of a and b to the first and second indexes of array 'num' for a and b respectively
    num[0]=a;
    num[1]=b;
}


int main()
{
    //input for two variables
    int a,b;
    cout<<"Enter first variable:";
    cin>>a;
    cout<<"Enter second variable:";
    cin>>b;
    //declaration of array of size 2
    int num[2];
    //swap function call
    swap(a,b,num);
	cout<<"After swapping: "<<"a:"<<num[0] << "  "<<"b:" <<num[1] << endl;	
	return 0;
}






