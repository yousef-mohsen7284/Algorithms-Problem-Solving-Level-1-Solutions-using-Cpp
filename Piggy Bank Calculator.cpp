#include<iostream>
#include<string>

using namespace std;

struct stPiggyBankContent {

	int Penny, Nickel, Dime, Quarter, Dollar;
};


stPiggyBankContent ReadPiggyBankContent() {

	stPiggyBankContent PiggyBankContent;

	cout << "Please Enter Number of Pennies:\n";
	cin >> PiggyBankContent.Penny;
	cout << "Please Enter Number of Nickels:\n";
	cin >> PiggyBankContent.Nickel;
	cout << "Please Enter Number of Dimes:\n";
	cin >> PiggyBankContent.Dime;
	cout << "Please Enter Number of Quarters:\n";
	cin >> PiggyBankContent.Quarter;
	cout << "Please Enter Number of Dollars:\n";
	cin >> PiggyBankContent.Dollar;
		
	return PiggyBankContent;
}


int CalculateTotalPennies(stPiggyBankContent PiggyBankContent) {

	int TotalPennies = 0;
	
	TotalPennies = (PiggyBankContent.Penny * 1) + (PiggyBankContent.Nickel * 5) + (PiggyBankContent.Dime * 10) + (PiggyBankContent.Quarter * 25) + (PiggyBankContent.Dollar * 100);

	return TotalPennies;
}



int main() {

	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

	cout << endl << "Total Pennies = " << TotalPennies << endl;
	cout << endl << "Total Dollars = " << (float)TotalPennies / 100 << endl;

	return 0;
}