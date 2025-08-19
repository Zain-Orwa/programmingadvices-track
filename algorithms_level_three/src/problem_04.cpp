#include <iostream>
using namespace std;

short ReadYear(){
	short Year = 1971;
	cout << "Enter Year: ";
	cin >> Year;
	return (Year);	
}

bool is_leap_year(short Year){
	return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

int NumberOfDaysInYear(short Year){
	return ((is_leap_year(Year)) ? 366 : 365);
}

int NumberOfHoursInYear(short Year){
	return (NumberOfDaysInYear(Year) * 24);
} 

int NumberOfMinutsInYear(short Year){
	return (NumberOfHoursInYear(Year) * 60);
}


int NumberOfSecondsInYear(short Year){
	return (NumberOfMinutsInYear(Year) * 60);
}

void PrintDaysHoursMinutsSeconds(){
	short Year = ReadYear();
	cout << "\nYear [" << Year <<  "] Has:\n\n";
	cout << "Number of Days    = " << NumberOfDaysInYear(Year) << endl;
	cout << "Number of Hours   = " << NumberOfHoursInYear(Year) << endl;
	cout << "Number of Minuts  = " << NumberOfMinutsInYear(Year) << endl;
	cout << "Number of Seconds = " << NumberOfSecondsInYear(Year) << endl;
}

int main(){
	PrintDaysHoursMinutsSeconds();

	return (0);
}

