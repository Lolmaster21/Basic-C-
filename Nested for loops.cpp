#include <iostream>
using namespace std;


int main() {
	for (int i = 0; i < 8; i++) { //This makes collumns (aka up and down)
		for (int j = 0; j < 3; j++) { //This makes rows ---------------
			cout << "*";
		}//end of inner loop
		cout << endl;//inside outer loop but not inner loop

	}
	for (int l = 0; l < 4; l++) { //This makes collumns (aka up and down)
		for (int m = 0; m < 9; m++) { //This makes rows ---------------
			cout << "*";
		}//end of inner loop
		cout << endl;//inside outer loop but not inner loop

	}
	for (int a = 0; a <= 3; a++) { //This makes collumns (aka up and down)
		for (int m = 0; m < 9; m++) { //This makes rows ---------------
			cout << a;//This counts to 3

		}//end of inner loop
		
		cout<<endl;
	}

	for (int a = 0; a < 1; a++) { //This makes collumns (aka up and down)
		for (int m = 0; m < 9; m++) { //This makes rows ---------------
			cout << "012"<< endl;
		}//end of inner loop

	}




}
