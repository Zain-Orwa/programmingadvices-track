// Number of days in a month with short optimized code//
//
#include <iostream>
using namespace std;

short ReadYear(){
	short Year;
	cout << "Please enter an year to check: ";
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

short NumberOfDaysInAMonth(short Month, short Year){
	if (Month < 1 || Month > 12)
		return (0);

	short arrNumberOfDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	return (Month == 2) ? (is_leap_year(Year) ? 29 : 28) : arrNumberOfDays[Month - 1];
}

short NumberOfHoursInAMonth(short Month, short Year){
	return (NumberOfDaysInAMonth(Month, Year) * 24);
}

int NumberOfMinutesInAMonth(short Month, short Year){
	return (NumberOfHoursInAMonth(Month, Year) * 60);
}

int NumberOfSecondsInAMonth(short Month, short Year){
	return (NumberOfMinutesInAMonth(Month, Year));
}

int main(){
	short Year = ReadYear();
	short Month = ReadMonth();

	cout << "\nNumber of Days in  Month [" << Month << "] is "
		<< NumberOfDaysInAMonth(Month, Year);

		cout << "\nNumber of Days in  Month [" << Month << "] is "
		<< NumberOfHoursInAMonth(Month, Year);

			cout << "\nNumber of Days in  Month [" << Month << "] is "
		<< NumberOfMinutesInAMonth(Month, Year);

				cout << "\nNumber of Days in  Month [" << Month << "] is "
		<< NumberOfSecondsInAMonth(Month, Year);


	return (0);
}

