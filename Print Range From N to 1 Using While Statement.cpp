#include<iostream>
using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please Enter a Number?\n";
	cin >> Number;
	return Number;
}


void PrintRangeFromNto1UsingWhileLoop(int Number) {

	int Counter = Number + 1;

	cout << "\nRange Printed Using While Statement: \n";

	while (Counter > 1) {
		
		Counter--;
		cout << Counter << endl;
	}

}




int main() {

	int Number = ReadNumber();

	PrintRangeFromNto1UsingWhileLoop(Number);


	return 0;
}