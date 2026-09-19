#include<iostream>
using namespace std;

enum EnOddOrEven { Odd = 1, Even = 2 };

int ReadNumber() {
	
	int Number;
	cout << "Please Enter a Number?\n";
	cin >> Number;
	return Number;
}

EnOddOrEven CheckOddOrEven(int Number) {

	if (Number % 2 != 0)
		return EnOddOrEven::Odd;
	else
		return EnOddOrEven::Even;
}

int SumOddNumbersFrom1toN__UsingForStatement(int Number) {

	int Sum = 0;
	cout << "\nSum Odd Numbers Using For Statement:\n";

	for (int Counter = 1;Counter <= Number;Counter++) {

		if (CheckOddOrEven(Counter) == EnOddOrEven::Odd) {

			Sum += Counter;
		}
	}
	return Sum;
}

int main() {

	int Number = ReadNumber();

	cout << SumOddNumbersFrom1toN__UsingForStatement(Number);
	

	return 0;
}