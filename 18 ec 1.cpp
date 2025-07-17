#include<iostream>
using namespace std;
int main()
{
	double hours, wage;
	
	cout << "enter work hours:";
	cin >> hours;
	
	cout << "enter wage time:";
	cin >> wage;
	
	cout << "pay is $" << wage*hours;
	return 0;
}
