/*
 Problem 10
 ==========
 Create a program that reads a day, month, and year from the user
 and prints the number of days passed since the beginning of that year.

 Notes
 =====
 - The program checks leap years to correctly handle February.
 - A helper function calculates the number of days in each month.
 - Another function sums up the days of previous months and adds the current day.
 - Error handling is minimal and intended for learning purposes.
*/


#include <iostream>
#include <string>

using namespace std;

short  ReadYear(){
   short Year = 1971;
   cout << "\nPlease enter a year: ";
   cin >> Year;
   return (Year);
}

short ReadMonth(){
    short Month = 1;
    cout << "\nPlease enter a Month: ";
    cin >> Month;
    return (Month);
}



short ReadDay(){
    short DayOfMonth = 0;
    cout << "\nPlease enter a day: ";
    cin >> DayOfMonth;
    return (DayOfMonth);
}

bool isLeapYear(short Year){
    return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

short NumberOfDaysInMonth(short Month, short Year){
    if (Month < 1 || Month > 12)
        return (0);

    short NumberOfDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return ((Month == 2) ? (isLeapYear(Year)) ? 29 : 28 : (NumberOfDays[Month - 1]));

}


short NumberOfDaysFromBeginningOfTheYear(short Day, short Month, short Year){

    short TotalDays = 0;

    for (short i = 0; i < Month - 1; i++){
        TotalDays += NumberOfDaysInMonth(i, Year);
    }
    
    TotalDays += Day;

    return (TotalDays); 
}


int main(){
    short Day   = ReadDay();
    short Month = ReadMonth();
    short Year  = ReadYear();

    cout << "\nNumber of Days from the beginning of the year is: "
         << NumberOfDaysFromBeginningOfTheYear(Day, Month, Year);
    cout << "\n\n";


    return (0);
}
