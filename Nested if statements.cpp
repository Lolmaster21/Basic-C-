#include<iostream>
using namespace std;

int main() {
  char desert;
	char topping;
	cout<< "Do you want (i)ce cream or (c)andy?" << endl;
	cin >> desert;

	if (desert == 'c') {

		cout <<"Do you want (c)hocolate or (f)ruit?" << endl;
		cin >> topping;

		if (topping == 'c') {
			cout<<"You got a hersheys bar" << endl;

		}
		else if (topping == 'f') {
			cout <<"Starbursttttt" << endl;
		}
	}

	else if (desert == 'i') {
		cout << "Do you want (c)hocolate or (f)ruit?" << endl;
		cin >> topping;

		if (topping == 'c') {
			cout << "You got a hot fudge sundae" << endl;

		}
		else if (topping == 'f') {
			cout << "Strawberry blizzzardddddddd" << endl;
		}
	}

}
