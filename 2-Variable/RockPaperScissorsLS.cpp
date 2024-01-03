// This program will show you the game: Rock, Paper, Scissors, Lizard, and Spock 

/* Problem:
Write a rock_paper_scissors.cpp program that:

Prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock.
Instructs the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
Compares the user’s choice and the computer’s choice and determine the winner.
Informs the user who the winner is.

Rules:

Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors.
*/

//Codes:

#include <iostream>
#include <stdlib.h>

int main() {
	srand(time(NULL));
	//seed the random number with the current time
	int computer = rand() % 5 + 1;
	/*variable for the computer's answer: can only be (0,1,2,3,4)+1,
	which is 1,2,3,4,5
	1 = rock
	2 = paper
	3 = scissor
	4 = Lizard
	5 = Spock

	Logic:
	1<2, 2<3, 3<1, 1>4, 4>5, 5>3, 3>4, 4>2, 2>5, 5>1

	rock > scissors
	scissors > paper
	paper > rock
	lizard > spock
	spock > scissors
	scissors > lizard
	lizard > paper
	paper > spock
	spock > rock
	rock > lizard

	*/

	int user = 0;
	//variable for user's answer

	std::cout << "rock paper scissors, lizard and spock! \n";
	std::cout << "======================\n";
	std::cout << "1) rock\n";
	std::cout << "2) paper\n";
	std::cout << "3) scissor\n";
	std::cout << "4) lizard\n";
	std::cout << "5) spock\n";
	std::cout << "======================\n";
	std::cout << "shoot!\n";
	//let user choose the answer

	std::cin >> user;
	//save the user's answer

	int rock = 1;
	int paper = 2;
	int scissors = 3;
	int lizard = 4;
	int spock = 5;
	//match the computer's answer equivalent to the user's answer

	std::cout << "\n";
	std::cout << "you choose: " << user << "\n";
	std::cout << "computer: " << computer << "\n\n";
	//output the computer's answer

	if (user == rock && computer == scissors) {
		std::cout << "You WIN. \n";
	}
	else if (user == scissors && computer == paper) {
		std::cout << "You WIN. \n";
	}
	else if (user == paper && computer == rock) {
		std::cout << "You WIN. \n";
	}
	else if (user == lizard && computer == spock) {
		std::cout << "You WIN. \n";
	}
	else if (user == spock && computer == scissors) {
		std::cout << "You WIN. \n";
	}
	else if (user == scissors && computer == lizard) {
		std::cout << "You WIN. \n";
	}
	else if (user == lizard && computer == paper) {
		std::cout << "You WIN. \n";
	}
	else if (user == paper && computer == spock) {
		std::cout << "You WIN. \n";
	}
	else if (user == spock && computer == rock) {
		std::cout << "You WIN. \n";
	}
	else if (user == rock && computer == lizard) {
		std::cout << "You WIN. \n";
	}
	else if (user == computer) {
		std::cout << "Tie. \n";
	}
	else {
		std::cout << "You Lose. \n";
	}

}