#include <iostream>
#include <string>
using namespace std;

short ReadDay(){
    short Day = 1;
    cout << "Please enter a day: ";
    cin >> Day;
    return (Day);
}

short ReadMonth(){
    short Month = 1;
    cout << "\nPlease enter a month: ";
    cin >> Month;
    return (Month);
}

short ReadYear(){
    short Year = 1900;
    cout << "\nPlease enter a year: ";
    cin >> Year;
    return (Year);
}

bool    isLeapYear(short Year){
    return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

short   NumberOfDaysInMonth(short Month, short Year){
    short arrMonthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return ((Month == 2) ? (isLeapYear(Year)) ? 29 : 28 : (arrMonthDays[Month - 1]));
}

short   NumberOfDaysFromBeginningOfTheYear(short Day, short Month, short Year){
    short TotalDays = 0;

    for (int i = 1; i <= Month - 1; i++){
       TotalDays += NumberOfDaysInMonth(i, Year); 
    }

    return (TotalDays += Day);
}

struct sDate{
    short Year;
    short Month;
    short Day;
};

sDate   GetDateFromDayOrderInYear(short DayOrderInYear, short Year){
    sDate Date;
    short RemainingDays = DayOrderInYear;
    short MonthDays = 0;

    Date.Year  = Year;
    Date.Month = 1;
    
    while (true){
        MonthDays = NumberOfDaysInMonth(Date.Month, Year);
        if (RemainingDays > MonthDays){
            RemainingDays -= MonthDays;
            Date.Month++;
        }
        else{
            Date.Day = RemainingDays;
            break;
        }
    }
    return (Date);
}

int main(){
    short Day   = ReadDay();
    short Month = ReadMonth();
    short Year  = ReadYear();
    short DayOrderInYear = NumberOfDaysFromBeginningOfTheYear(Day, Month, Year);

    cout <<  "\nNumber of days from the beginning of the year: " << DayOrderInYear << endl;

    sDate Date = GetDateFromDayOrderInYear(DayOrderInYear, Year);

    cout << "\n\nDate for [" << DayOrderInYear << "] is: " 
         << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    return (0);
}

