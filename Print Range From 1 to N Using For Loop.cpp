#include<iostream>
using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please Enter a Number?\n";
	cin >> Number;
	return Number;
}

void PrintRangeFrom1ToN_UsingForLoop(int Number) {

	cout << "\nRange Printed Using For Loop: \n";
	for (int Counter=1;Counter<=Number;Counter++) {

		cout << Counter << endl;
	}

}


int main() {

	int Number = ReadNumber();
   

	PrintRangeFrom1ToN_UsingForLoop(Number);

	return 0;
}