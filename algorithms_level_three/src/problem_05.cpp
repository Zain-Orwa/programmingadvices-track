#include <iostream>
using namespace std;

short ReadYear(){
	short Year;
	cout << "Please nter an year to check: ";
	cin >> Year;
	return (Year);	
}

short ReadMonth(){
	short Month;
	cout << "\nPlease enter a month to check: ";
	cin >> Month;
	return (Month);
}

bool is_leap_year(short Year){
	return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

int DaysInMonth(short Year, short Month){
	if (Month == 2)
			return (is_leap_year(Year) ? 29 : 28);
	else if (Month == 4 || Month == 6 || Month == 9 || Month == 11)
			return (30);
	else
			return (31);
}

void	PrintDaysHoursMinutsSecondsInMonth(){
	int Year  = ReadYear();
	int Month = ReadMonth();
	int Days  = DaysInMonth(Year, Month);
	
	cout << "\n";
	cout << "Number of days in Month    = " << Days  << endl;	
	cout << "Number of hours in Month   = " << Days * 24 << endl;
	cout << "Number of Minuts in Month  = " << Days * 24 * 60 << endl;
	cout << "Number of Seconds in Month = " << Days * 24 * 60 * 60 << endl;
}


int main(){
	PrintDaysHoursMinutsSecondsInMonth();

	return (0);
}


