#include<iostream>
#include<string>

using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}


float MonthlyInstallment(float LoanAmount, float NumberOfMonths)
{

	return (float)LoanAmount / NumberOfMonths;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
	float NumberOfMonths = ReadPositiveNumber("Please Enter Number Of Months?");
	
	cout << "\nMonthly Installment: " << MonthlyInstallment(LoanAmount, NumberOfMonths) << endl;

	return 0;
}