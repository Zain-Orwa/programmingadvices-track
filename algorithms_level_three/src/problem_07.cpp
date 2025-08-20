#include <iostream>
using namespace std;

short DayOfTheWeekOrder(short Day, short Month, short Year){
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;
	//Gregorian Calendar
	//0:Sun, 1:Mon, 2:Tue, 3:Wed...etc;
	
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short ReadDay(){
	short Day;
	cout << "\nPlease enter a day: ";
	cin >> Day;
	return (Day);
}

short ReadMonth(){
	short Month;
	cout << "\nPlease enter a Month: ";
	cin >> Month;
	return (Month);
}

short ReadYear(){
	short Year;
	cout << "\nPlease enter an year: ";
	cin >> Year;
	return (Year);
}

string DayShortName(short DayOfTheWeekOrder){
	string arrDayNames[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
	return arrDayNames[DayOfTheWeekOrder];
}

int main(){
	short Day    = ReadDay();
	short Month  = ReadMonth();
	short Year   = ReadYear();

	cout << "\nDate      : " << Day << "/" << Month << "/" << Year;
	cout << "\nDay Order : " << DayOfTheWeekOrder(Day, Month, Year);
	cout << "\nDay Name  : " << DayShortName(DayOfTheWeekOrder(Day, Month, Year)) << endl;

	return (0);
}
