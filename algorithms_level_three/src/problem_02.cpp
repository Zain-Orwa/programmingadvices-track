/*
 Question
 ========
 Write a program that reads a year from the user and checks whether it is
 a leap year or not.

 Note
 ====
 - This code is for learning purposes.
 - It is not fully optimized.
 - The leap year function here is intentionally written in a longer form 
   for clarity and step-by-step learning. In the next problem, the function 
   will be shortened to a more optimized version.
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
    if (Year % 400 == 0) {
        return true;
    }
    else if (Year % 100 == 0) {
        return false;
    }
    else if (Year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
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

