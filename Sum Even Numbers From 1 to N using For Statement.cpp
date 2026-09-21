#include<iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

int ReadNumber() {

	int Number;
	cout << "Please Enter a Number?\n";
	cin >> Number;
	return Number;
}

enOddOrEven CheckNumber(int Number) {

	if (Number % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int SumEvenNumbersFrom1To_N_UsingForStatement(int Number) {

	int Sum = 0;
	cout << "\nSum Even Numbers Using For Statement:\n";

	for (int Counter = 1;Counter <= Number;Counter++) {

		if (CheckNumber(Counter) == enOddOrEven::Even) {

			Sum += Counter;
		}
	}


	return Sum;
}



int main() {


	int Number = ReadNumber();

	cout << SumEvenNumbersFrom1To_N_UsingForStatement(Number) << endl;

	return 0;
}