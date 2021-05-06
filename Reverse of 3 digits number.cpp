#include<iostream>
using namespace std;
int main()
{	
	int num, temp;		
	cout<<"ENTER THE 3 DIGIT NUMBER:- ";
	cin>>num;		
	cout<<"AFTER REVERSE RESULT IS:- ";
{			
	temp = num%10;
	temp = temp%10;
	cout<<temp;
		
	temp = num/10;
	temp = temp%10;
	cout<<temp;
	
	temp = num/10;
	temp = temp/10;
	cout<<temp;
}
	return 0;
}

