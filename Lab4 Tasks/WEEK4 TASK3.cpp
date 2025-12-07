#include<iostream>
using namespace std;
int main()
{
	int balance;
	bool loyalty;
	cout<<"Enter account balance:";
	cin>>balance;
	cout<<"Enter 1 for loyal and 0 for not loyal:";
	cin>>loyalty;
	(balance<100)? cout<<"Account Type: low balance Account"<<endl
	:(balance>=100 && balance<=500)? cout<<"Account Type:Standard Account"<< endl
	:cout<<"Account Type:Premium Account"<<endl;
	(balance>200 && loyalty== 1)? 
	cout<<"Eligible for special offer"<<endl
	:cout<<"Not Eligible for special offer";
	return 0;
} 
