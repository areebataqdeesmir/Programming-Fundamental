#include<iostream>
using namespace std;
int main()
{
	int x;
	cout <<"Enter an integer:";
	cin >> x;
	(x%2==0) ? cout << "The number " << x << " is even"<< endl
             : cout << "The number " << x << " is odd "<< endl;
return 0;	
}
