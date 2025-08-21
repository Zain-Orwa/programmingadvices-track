/*
 Question
 ========
 Write a program that reads a year from the user and prints the total
 number of days, hours, minutes, and seconds in that year.

 Note
 ====
 - This code is for learning purposes.
 - It is not fully optimized.
 - Edge cases are not fully handled (e.g., negative years, year zero, or extremely large values).
 - This program is not intended to check or handle decimal (floating-point) numbers.
*/

#include <iostream>
using namespace std;

short ReadYear() {
    short Year = 1971;
    cout << "Enter Year: ";
    cin >> Year;
    return Year;	
}

bool is_leap_year(short Year) {
    return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

int NumberOfDaysInYear(short Year) {
    return (is_leap_year(Year) ? 366 : 365);
}

int NumberOfHoursInYear(short Year) {
    return (NumberOfDaysInYear(Year) * 24);
} 

int NumberOfMinutesInYear(short Year) {
    return (NumberOfHoursInYear(Year) * 60);
}

int NumberOfSecondsInYear(short Year) {
    return (NumberOfMinutesInYear(Year) * 60);
}

void PrintDaysHoursMinutesSeconds() {
    short Year = ReadYear();
    cout << "\nYear [" << Year << "] has:\n\n";
    cout << "Number of Days    = " << NumberOfDaysInYear(Year) << endl;
    cout << "Number of Hours   = " << NumberOfHoursInYear(Year) << endl;
    cout << "Number of Minutes = " << NumberOfMinutesInYear(Year) << endl;
    cout << "Number of Seconds = " << NumberOfSecondsInYear(Year) << endl;
}

int main() {
    PrintDaysHoursMinutesSeconds();
    return 0;
}

