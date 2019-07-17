#include<iostream>
using namespace std;
void main(){
	double p;
	cout << "Enter your points :";
	cin >> p;
	if (p > 100)
		cout << "Error";
	else if (p >= 90 && p <=100)
		cout << "A\n";
	else if (p >= 80)
		cout << "B\n";
	else if (p >= 70)
		cout << "C\n";
	else if (p >= 60)
		cout << "D\n";
	else if (p <= 59 && p>=0)
		cout << "F\n";
	else
		cout<<"Error";
}