#include <iostream>
#include <cmath>
#include <string>

void printConversion(double original, double converted, std::string currency){
	//Prints out original value and converted value while keeping up to 2 decimal places
	std::cout << std::trunc(original * 100) / 100 << " USD is " << std::trunc(converted * 100) / 100 << " " << currency << ".\n";
}

int main(){
	double USD;
	double convertedValue;
	char selector;
	std::string convertedCurrency;

	std::cout << "Please enter amount in USD and press enter.\n";
	std::cin >> USD;
	std::cout << "Select the currency to convert to by typing its letter and pressing enter\n";
	std::cout << "A\tCanadian Dollar\nB\tMexican Peso\nC\tBritish Pound\nD\tEuro\n";
	std::cin >> selector;

	switch (selector){
		case 'A':
		case 'a':
			convertedValue = USD * 1.31;
			convertedCurrency = "CAD";
			break;
		case 'B':
		case 'b':
			convertedValue = USD * 19.93;
			convertedCurrency = "MXN";
			break;
		case 'C':
		case 'c':
			convertedValue = USD * 0.86;
			convertedCurrency = "GBP";
			break;
		case 'D':
		case 'd':
			convertedValue = USD * 1;
			convertedCurrency = "EUR";
			break;
		default:
			std::cout << "Please enter a valid option.\n";
			break;
	}
	printConversion(USD, convertedValue, convertedCurrency);

	return 0;
}