#include<iostream>
#include<cmath>
#include<string>

using namespace std;

enum enPrimeOrNot { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{

    float Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

enPrimeOrNot CheckPrime(int Number)
{

    int M = round(Number / 2);

    for (int Counter = 2;Counter <= M;Counter++)
    {
        if (Number % Counter == 0)
        {
            return enPrimeOrNot::NotPrime;
        }

        return enPrimeOrNot::Prime;
    }
}


void PrintNumberType(int Number) {

    switch (CheckPrime(Number))
    {
    case enPrimeOrNot::NotPrime:
        cout << "Number Is Not Prime!";
        break;
    case enPrimeOrNot::Prime:
        cout << "Number Is Prime!";
        break;
    }
}


int main() {


    PrintNumberType(ReadPositiveNumber("Please Enter Positive Number?"));
    return 0;
}
