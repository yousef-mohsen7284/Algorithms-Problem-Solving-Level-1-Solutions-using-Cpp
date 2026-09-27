#include<iostream>
#include<string>

using namespace std;

string ReadPinCode()
{
	string PIN;
	cout << "Please Enter Your PIN?\n";
	cin >> PIN;

	return PIN;
}


bool Login()
{
	string PINCode;
	do
	{
		PINCode = ReadPinCode();
	
		
		if (PINCode == "1234")
		{
			return 1;
		}
		else

			cout << "\nWrong PIN!\n";
	    	system("color 4F");

	} while (PINCode != "1234");

	return 0;
}


int main()
{

	if (Login())
	{

		system("color 2F");
		cout << "Your Balance Is: " << 7500 << "\n";
	};

	return 0;
}