#include <iostream>
using namespace std;


int main()
{
	for (int i = 0; i < 10; i++) //i = 0 starts at 0. i < 10 counts to 9 since it doesnt equal it. i++ adds by 1
		cout << i << "";

	cout << endl; //skips a line

	for (int j = 5; j <= 30; j+= 5) //j = 5 starts at 5. j <=30 counts to 30. j++ adds by 5
		cout << j << "";

	cout << endl; //skips a line

	for (int k = 100; k >= 0; k -= 10) //k = 100 starts at 100. k >= 0 counts to 0. k-= subtracts by 10
		cout << k << "";

	cout << endl; //skips a line

	for (int m = 2; m < 40; m *= 2) //m = 2 starts at 2. i < 40 counts to 40. m*= multiplies by 2
		cout << m << "";

	cout << endl; //skips a line
}

