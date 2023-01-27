#include<iostream>
using namespace std;

int main() {
	int input;

	cout << "How many cooookies you have?" << endl;
	cin >> input;

	if (input < 5) {

		cout << ("You want a cookie??") << endl;

	}
	if (input > 10) {

		cout << ("To many cookies cough them up") << endl;

	}

	else if (input > 10-5) {

		cout << ("Hey thats pretty good amount of cookies") << endl;

	}
}
