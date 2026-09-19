#include<iostream>
using namespace std;

int ReadAge() {
	int Age;
	cout << "Please Enter Age Between 18 and 45: \n";
	cin >> Age;
	return Age;
}

bool ValidateAge(int Age, int From, int To) {

	return (Age >= From && Age <= To);
}

int ReadUntilAgeBetween(int From, int To) {
	
	int Age = 0;

	do
	{

		Age = (ReadAge());
	} while (!ValidateAge(Age, 18, 45));
	return Age;
}

void PrintAge(int Age) {

	cout << "\nYour Age is: " << Age << endl;
}


int main() {

	PrintAge(ReadUntilAgeBetween(18,45));
	return 0;
}
