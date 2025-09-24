#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct sDate {
    short Day;
    short Month;
    short Year;
};

short DaysOfTheWeekOrder(short Day, short Month, short Year){
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DaysOfTheWeekOrder(sDate Date){
 
}

bool isLeapYear(short Year){
    return (Year / 4 == 0 && Year / 100 != 0) || (Year / 400 == 0);
}

short NumberOfDaysInMonth(short Month, short Year){
    short arrMonthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return ((Month == 2) ? (isLeapYear(Year) ? 29 : 28) : arrMonthDays[Month - 1]);
}


string DayShortName(short DaysOfTheWeekOrder){
    string arrDayNames[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    return arrDayNames[DaysOfTheWeekOrder];
}

sDate GetSystmeDate(){
    sDate Date;

    time_t t = time(0);
    tm* now = localtime(&t);

    Date.Year  = now->tm_year + 1900;
    Date.Month = now->tm_mon  + 1;  
    Date.Day   = now->tm_mday;
    
    return (Date);
}

bool isEndOfWeek(short Day){
    return (Day == 5);
}

int main(){
    sDate Date = GetSystmeDate();

    cout << "Today is " << DayShortName(DaysOfTheWeekOrder(Date));

    cout << "\nIs end of week?\n";
    if (isEndOfWeek(Date.Day) == DaysOfTheWeekOrder(Date)){
        cout << "Yes, it's " << Date.Day << " is end of week!\n";
    } else {
        cout << "\nNo, it's " << Date.Day << " it's not end of week!\n";
    }

    return (0);
}





