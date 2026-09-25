#include<iostream>
#include<string>

using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;
	
	return Number;
}


float CalculateRemainder(float TotalBill, float TotalCashPaid)
{

	return TotalCashPaid - TotalBill;
}


int main()
{

	float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");
	float TotalCashPaid = ReadPositiveNumber("Please Enter Total Cash Paid?");

	cout << endl << "Total Bill: " << TotalBill << endl;
	cout << "Total Cash Paid: " << TotalCashPaid << endl;
	cout << "**************************" << endl;
	cout << "Remainder= " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;

	return 0;
}