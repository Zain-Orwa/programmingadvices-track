#include <iostream>
using namespace std;

short ReadYear(){
	short Year = 1900;
	cout << "Enter Year: ";
	cin >> Year;
	return (Year);	
}

bool is_leap_year(short Year){
	return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

int main(){
	short Year = ReadYear();

	if (is_leap_year(Year)){
		cout << "\nYes, year [" << Year << "] is a leap year\n";
	}
	else
		cout << "\nNo, year [" << Year << "] it's not a leap year!\n";


	return (0);
}


