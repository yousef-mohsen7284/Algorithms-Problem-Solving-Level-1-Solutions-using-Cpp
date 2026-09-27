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


float TotalMonths(float LoanAmount, float MonthlyInstallment)
{

	return (float)LoanAmount / MonthlyInstallment;
}


int main()
{

	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
	float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment?");

	cout << "\nTotal Months To Pay: " << TotalMonths(LoanAmount, MonthlyInstallment) << " Months" << endl;

	return 0;


}