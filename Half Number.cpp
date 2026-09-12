#include<iostream>
#include<string>
using namespace std;

int ReadNumber() {
    int Number;
    cout << "Please Enter Number ?\n";
    cin >> Number;
    
    return Number;
}


float HalfNumberCalculation(int Number) {

    return (float)Number / 2;
}

void PrintHalfNumber(int Number) {

    string Result = "Half of " + to_string(Number) + " is: " + to_string(HalfNumberCalculation(Number));
    cout << endl<< Result;
}

int main() {

    PrintHalfNumber(ReadNumber());

    return 0;
}
