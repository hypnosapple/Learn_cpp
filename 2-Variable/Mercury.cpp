/* Question:  Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.
Write a space.cpp program that helps him keep track of his target weight by:
It should ask him what his earth weight is.
Ask him to enter a number for the planet he wants to fight on.
It should then compute his weight on the destination planet.
Here is the table of conversion:
#
Planet
Relative Gravity
1
Mercury
0.38

2
Venus
0.91

3
Mars
0.38

4
Jupiter
2.34

5
Saturn
1.06

6
Uranus
0.92

7
Neptune
1.19

*/

//Code:

#include <iostream>

int main() {

    int weightE = 0;
    int weightP = 0;

    int Mercury = 1;
    int Venus = 2;
    int Mars = 3;
    int Jupiter = 4;
    int Saturn = 5;
    int Uranus = 6;
    int Neptune = 7;

    std::cout << "Your weight on Earth: \n";

    std::cin >> weightE;

    std::cout << "Enter a number for the planet you want to flight on. \n" << "Mercury = 1\n" << "Venus = 2\n" << "Mars = 3\n" << "Jupiter = 4\n" << "Saturn = 5\n" << "Uranus = 6\n" << "Neptune = 7\n";

    std::cin >> weightP;

    switch (weightP) {
    case 1:
        std::cout << weightE * 0.38 << "\n";
        break;
    case 2:
        std::cout << weightE * 0.91 << "\n";
        break;
    case 3:
        std::cout << weightE * 0.38 << "\n";
        break;
    case 4:
        std::cout << weightE * 2.34 << "\n";
        break;
    case 5:
        std::cout << weightE * 1.06 << "\n";
        break;
    case 6:
        std::cout << weightE * 0.92 << "\n";
        break;
    case 7:
        std::cout << weightE * 1.19 << "\n";
        break;
    }

}
