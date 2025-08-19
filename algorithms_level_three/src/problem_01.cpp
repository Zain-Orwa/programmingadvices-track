#include <iostream>
#include <string>

using namespace std;

long long  ReadNumber(){
	long long Number = 0;
	cout << "Please enter number: ";
	cin >> Number;
	return (Number);
}


string NumberToText(long long Number){
	if (Number == 0){
		return " ";
	}

	if (Number >= 1 && Number <= 19){
		string arr[] = {" ", "One", "Tow", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
		"Eleven", "Twelve", "Thirteen", "Fourteen", "Fiveteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
		return arr[Number];
	}

	if (Number >= 20 && Number <= 99){
		string arr[] = {" ", " ", "Twenty", "Thirty", "Fourty", "Fivty", "Sixty", "Seventy", "Eighty", "Ninety"};
		return arr[Number / 10] + " " + NumberToText(Number % 10);
	}

	if (Number >= 100 && Number <= 199){
		return "One Handred " + NumberToText(Number % 100);
	}

	if (Number >= 200 && Number <= 999){
		return NumberToText(Number / 100) + " Handred " + NumberToText(Number % 100);
	}

	if (Number >= 1000 && Number <= 1999){
		return "One Thousand " + NumberToText(Number % 1000);
	}

	if (Number >= 2000 && Number <= 999999){
		return NumberToText(Number / 1000) + " Thousand " + NumberToText(Number % 1000);
	}

	if (Number >= 1000000 && Number <= 1999999){
		return "One Million " + NumberToText(Number % 1000000);
	}

	if (Number >= 2000000 && Number <= 999999999){
		return NumberToText(Number / 1000000) + " Million " + NumberToText(Number % 1000000);
	}

	if (Number >= 1000000000 && Number <= 1999999999){
		return "One Billion " + NumberToText(Number % 1000000000);
	}
	
	if (Number >= 2000000000 && Number <= 999999999999){
		return NumberToText(Number / 1000000000) + " Billion " + NumberToText(Number % 1000000000);
	}
	
	if (Number >= 1000000000000 && Number <= 1999999999999){
		return "One Trillion " + NumberToText(Number % 1000000000000);
	}
	else{
		return  NumberToText(Number / 1000000000000) + " Trillion " + NumberToText(Number %1000000000000);
	}

	return ("Number our of range!");
}

int main(){
	long long Number = ReadNumber();

	cout << "\n" <<  NumberToText(Number) << endl;

	return (0);
}
