#include<iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2) {
	cout << "Please Enter Number A?\n";
	cin >> Num1;
	cout << "Please Enter Number B?\n";
	cin >> Num2;
}

void Swap(int& A, int& B) {

	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}

void PrintNumbers(int Num1, int Num2) {

	cout << "\nNumber 1: " << Num1;
	cout << "\nNumber 2: " << Num2 << endl;
}


int main() {

	int A, B;
	ReadNumbers(A, B);
	PrintNumbers(A, B);
	Swap(A, B);
	PrintNumbers(A, B);

	return 0;


}
