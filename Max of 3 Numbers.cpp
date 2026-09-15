#include<iostream>
using namespace std;

void ReadNumbers(int& A, int& B, int& C) {
	cout << "Please Enter Number 1?\n";
	cin >> A;
	cout << "Please Enter Number 2?\n";
	cin >> B;
	cout << "Please Enter Number 3?\n";
	cin >> C;
}

int MaxOf3Numbers(int A, int B, int C) {

	if (A > B)
		if (A > C)
			return A;
		else
			return C;
	if (B > A)
		if (B > C)
			return B;
		else
			return C;
}

void PrintMaxOf3Numbers(int Max) {

	cout << "\nMaximum of 3 Numbers is: " << Max << endl;
}

int main() {

	int A, B, C;
	ReadNumbers(A, B, C);
	PrintMaxOf3Numbers(MaxOf3Numbers(A, B, C));

	return 0;

}