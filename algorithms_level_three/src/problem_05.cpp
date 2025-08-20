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

	if (Month == 2)
		return (is_leap_year(Year) ? 29 : 28);

	short arr31Days[12] = {1, 3, 5, 7, 8, 10, 12};

	for (short i = 1; i <= 7; i++){
		if (arr31Days[i - 1] == Month){
			return (31);
		}
	}

	return (30);
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






/*int DaysInMonth(short Year, short Month){
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
}*/
