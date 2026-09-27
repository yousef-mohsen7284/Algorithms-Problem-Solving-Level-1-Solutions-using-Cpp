#include<iostream>
#include<string>

using namespace std;

string ReadPINCode()
{
	string PINCode;
	cout << "Please Enter PIN Code?\n";
	cin >> PINCode;

	return PINCode;
}

bool Login()
{
	string PINCode;
	int Counter = 3;

	do
	{

		Counter--;
		PINCode = ReadPINCode();

		if (PINCode == "1234")
		{
			return 1;
		}
		else
		{

			system("color 4F");
			cout << "Wrong PIN,You Have " << Counter << " Attemps Left!\n";
		}

	} while (Counter >= 1 && PINCode!="1234");
	
	return 0;
}

int main()
{

	if (Login())
	{

		system("color 2F");
		cout << "Your Balance Is:" << 7500 << '\n';
	}
	else
	{

		cout << "\nYour Card Is Blocked,Call The Bank For Help!\n";
	}

	return 0;
}