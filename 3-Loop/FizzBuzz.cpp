/* Problem:
Write a fizzbuzz.cpp program that outputs numbers from 1 to 100.

But for multiples of 3, print Fizz instead of the number and for the multiples of 5, print Buzz. For numbers which are multiples of both 3 and 5 print, FizzBuzz.
*/

//Code:

#include <iostream>

int main() {

    for (int i = 1; i <= 100; i++) {

        if (i % 15 == 0) {
            std::cout << "FizzBuzz\n";
        }
        else if (i % 5 == 0) {
            std::cout << "Buzz\n";
        }
        else if (i % 3 == 0) {
            std::cout << "Fizz\n";
        }
        else {
            std::cout << i << "\n";
        }
    }
}