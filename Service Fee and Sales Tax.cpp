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



float CalculateServiceFeeAndTotalSalesTax(float TotalBill)
{

	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;

	return TotalBill;
}



int main()
{

	float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");

	cout << endl << "Total Bill= " << TotalBill << " Pound" << endl;

	cout << "Total Bill after Adding Service Fee and Sales Tax= " << CalculateServiceFeeAndTotalSalesTax(TotalBill) << " Pound" << endl;


	return 0;

}