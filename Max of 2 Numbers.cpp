#include<iostream>
using namespace std;

void ReadNumbers(int& Number1, int& Number2) {
	cout << "Please Enter Number 1?\n";
	cin >> Number1;
	cout << "Please Enter Number 2?\n";
	cin >> Number2;
}

int MaxOf2Numbers(int Number1, int Number2) {
	
	if (Number1 > Number2)
		return Number1;
	else
		return Number2;
}

void PrintReuslt(int Max) {

	cout << "\nThe Maximum Number is: " << Max << endl;
}


int main() {
	int Number1, Number2;
	ReadNumbers(Number1, Number2);
	PrintReuslt(MaxOf2Numbers(Number1,Number2));

	return 0;
}