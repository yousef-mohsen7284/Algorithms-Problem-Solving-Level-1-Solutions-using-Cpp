#include<iostream>
#include<string>

using namespace std;

int ReadTotalSales() {

	float TotalSales;
	cout << "Please Enter Total Sales:\n";
	cin >> TotalSales;
	return TotalSales;
}

float CommissionPercentage(float TotalSales) {

	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}


float CalcluateCommission(float TotalSales) {


	return CommissionPercentage(TotalSales) * TotalSales;
}



int main() {

	float TotalSales = ReadTotalSales();

	cout << endl << "Commission Percentage= " << CommissionPercentage(TotalSales) << endl;
	cout << endl << "Total Commission= " << CalcluateCommission(TotalSales) << endl;

	return 0;

}