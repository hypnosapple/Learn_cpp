/* Question: 
Write a leap_year.cpp program that:

Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
There are 3 criteria that must be taken into account to identify a leap year:

If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year. */

//Code:

#include <iostream>

int main() {

    int year; //let the user enter a year

    std::cout << "Enter a year: \n";
    //enter a year
    std::cin >> year;
    //save the number as year


    if (year < 1000 || year > 9999) {
        std::cout << "Please enter a four-digit number. \n";
    } //check if year is a 4-digit number
    else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        std::cout << year << " is a leap year.";
    } //check if year is a leap year
    else {
        std::cout << year << " is not a leap year.";
    } //if nothing match, then it is not a leap year

}