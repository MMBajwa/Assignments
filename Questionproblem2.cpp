#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char name[100];
	char number[20];

	cout << "Enter Your Full Name: ";
	cin.getline(name, 100);

	cout << "Enter Your Phone Number: ";
	cin >> number;

	cout << "\n\nWelcome To Murtaza's Security Hub";
	cout << "\nHello ";

	int x = 0;
	while (name[x] != ' ' && name[x] != '\0') {
		cout << name[x];
		x++;
	}
	cout << "!\n";

	int count = 0;
	bool isValid = true;

	while (number[count] != '\0') {
		if (number[count] < '0' || number[count] > '9') {
			isValid = false;
			break;
		}
		count++;
	}

	if (count == 11 && isValid) {
		for (int i = 0; i < 5; i++)
			cout << number[i];
		cout << "*****" << number[10];
	}
	else {
		cout << "\nInvalid Number Input. Try Again :)";
	}

	return 0;
}
