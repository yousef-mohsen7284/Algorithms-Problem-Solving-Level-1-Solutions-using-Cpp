#include<iostream>
using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please Enter a Number?\n";
	cin >> Number;
	return Number;
}

void PrintRangeFrom1ToN_UsingDoWhileLoop(int Number) {

	int Counter = 0;
	cout << "\nRange Printed Using Do..While Loop: \n";
	do {
		Counter++;
		cout << Counter << endl;
	} while (Counter < Number);

}


int main() {

	int Number = ReadNumber();
    
	PrintRangeFrom1ToN_UsingDoWhileLoop(Number);

	return 0;
}