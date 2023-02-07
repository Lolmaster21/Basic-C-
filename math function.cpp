#include<iostream>
#include<math.h>

using namespace std;

double lol(int num1, int num2); //creates the function and passes 2 parameters

int main() {
	int num1;
	int num2;
	cout << "Give me 2 numbers" << endl;
	cin >> num1;
	cin >> num2;
	cout << lol(num1, num2) << endl;  //prints and calls the function 

}

double lol(int num1, int num2) { //function definition 
	double lol = 0;
	
	num1 = num1 * num1;
	num2 = num2 * num2;
	lol = num1 + num2;

	lol = sqrt(lol);

	return lol; //This returns the input


}

