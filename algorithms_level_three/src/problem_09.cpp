/*
 Problem 9
 =========
 Create a program that reads a year from the user
 and prints a formatted calendar for the entire year.

 Notes
 =====
 - The program calculates leap years to correctly adjust February days.
 - A helper function determines the first weekday of each month using a
   mathematical formula based on the Gregorian calendar.
 - The calendar is printed in a text-based table format, showing all
   months of the year one after another.
 - This implementation is for learning purposes only:
    * It is not fully optimized.
    * Error handling for invalid input (e.g., negative years, invalid months)
      is minimal.
    * Formatting could differ across compilers/platforms.
*/



#include <iostream>
#include <string>

using namespace std;

short ReadYear(){
    short Year = 1971;
    cout << "Enter a Year: ";
    cin >> Year;
    return (Year);
}

bool isLeapYear(short Year){
    return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

short NumberOfDaysInMonth(short Month, short Year){
    if (Month < 1 || Month > 12)
        return (0);

    short NumberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (Month == 2) ? (isLeapYear(Year) ?  29 : 28) : NumberOfDays[Month -1];
}

short DayOfTheWeekOrder(short Day, short Month, short Year){
    short a, y, m;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string MonthShortName(short Month){
    string arrMonthName[12] = {"Jan", "Feb", "Mar", "Apr",
                              "May", "Jun", "Jul", "Aug",
                              "Sept", "Oct", "Nov", "Dec"};
    return arrMonthName[Month - 1];
}

string DayShortName(short DayIndex){
   string arrDayName[7] = {"Sun", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat"};
   return (arrDayName[DayIndex - 1]);
}

void    PrintMonthCalendar(short Month, short Year){
    short NumberofDays = NumberOfDaysInMonth(Month, Year);
    short Current      = DayOfTheWeekOrder(1, Month, Year);

    printf("\n____________________%s____________________\n\n", 
            MonthShortName(Month).c_str());

    printf("   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n");

    short i = 0;
    for (i = 0; i < Current; i++)
        printf("%6s", "");
    for (short j = 1; j <= NumberofDays; j++){
        printf("%6d", j);

        if (++i == 7){
            i = 0;
            printf("\n");
        }
    }
    printf("\n___________________________________________\n");      
}

void    PrintYearCalendar(short Year){

    printf("\n____________________________________________\n");
    printf("\n              Calendar - %d", Year);
    printf("\n____________________________________________\n");


    for (short Month = 1; Month <= 12; Month++){

        PrintMonthCalendar(Month, Year);
        cout << "\n\n";
    }
}

int main(){
    short Year = ReadYear();
    PrintYearCalendar(Year);

    return (0);
}
