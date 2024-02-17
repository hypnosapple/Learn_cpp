/*
Write a program to find the sum of even numbers and the product of odd numbers in a vector.

For example:

Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.

Then the program should output:

Sum of even numbers is 12
Product of odd numbers is 27

*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num = { 2,4,3,6,1,9 };

    int sum = 0;
    int product = 1;

    for (int i = 0; i < num.size(); i++) {
        //check even or odd
        if (num[i] % 2 == 0) {
            sum += num[i];
        }
        else {
            product *= num[i];
        }
    }

    cout << "Sum of even number is " << sum << endl;
    cout << "Product of odd number is " << product << endl;

}