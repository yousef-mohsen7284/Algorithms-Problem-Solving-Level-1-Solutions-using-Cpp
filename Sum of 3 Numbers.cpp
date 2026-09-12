#include<iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2, int& num3) {

	cout << "Please Enter Your Number 1?\n";
	cin >> num1;
	cout << "Please Enter Your Number 2?\n";
	cin >> num2;
	cout << "Please Enter Your Number 3?\n";
	cin >> num3;
}

int SumOf3numbers(int num1, int num2, int num3) {

	return num1 + num2 + num3;
}


void PrintSum(int Total) {

	cout << "\nTotal Sum of Numbers is: " << Total << endl;
}

int main() {

	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintSum(SumOf3numbers(num1, num2, num3));

	return 0;
}