/*
 Question
 ========
 Write a program that reads a year from the user and checks whether it is
 a leap year or not.

 Note
 ====
 - This code is for learning purposes.
 - This version contains the optimized leap year function using a single return statement.
 - Edge cases are not fully handled (e.g., negative years, year zero, or extremely large values).
 - This program is not intended to check or handle decimal (floating-point) numbers.
*/

#include <iostream>
using namespace std;

short ReadYear() {
    short Year = 1900;
    cout << "Enter Year: ";
    cin >> Year;
    return Year;	
}

bool is_leap_year(short Year) {
    return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

int main() {
    short Year = ReadYear();

    if (is_leap_year(Year)) {
        cout << "\nYes, year [" << Year << "] is a leap year.\n";
    } else {
        cout << "\nNo, year [" << Year << "] is not a leap year.\n";
    }

    return 0;
}

