#include<iostream>
using namespace std;

int ReadAge() {
	
	int Age;
	cout << "Please Enter Your Age?\n";
	cin >> Age;
	return Age;
}

bool ValidateAgeRange(int Number, int From, int To) {

	return(Number >= From && Number <= To);
}

void PrintAgeValidation(int Age) {

	if (ValidateAgeRange(Age, 18, 45))
		cout << Age << " is a Valid Age!\n";
	else
		cout << Age << " is Invalid Age!\n";
}

int main() {

	PrintAgeValidation(ReadAge());

	return 0;
}
