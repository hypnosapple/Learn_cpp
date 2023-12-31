/*Question: Piggy Bank
You just returned from a trip to South America. The countries you visited were Colombia, Brazil, and Peru. You arrived back in your country with some foreign currencies from these three countries.

Piggy Bank
Write a C++ program called currency.cpp that prompts the user for the amount of each foreign currency. Your prompts should look like:

Enter number of Colombian Pesos:
Enter number of Brazilian Reais:
Enter number of Peruvian Soles:

Your program should then convert the amount entered by the user and display the total amount of USD. Your final output should look like:

US Dollars = $______
*/

//Code:

#include <iostream>

int main() {
	double Pesos;
	double Reais;
	double Soles;
	//declare variable for foreign currency;
	double dollars;
	//declare variable for US dollars;

	std::cout << "Enter number of Colombian Pesos: \n";
	//ask the user 1st question
	std::cin >> Pesos;
	//save the 1st answer as Pesos

	std::cout << "Enter number of Brazilian Reais: \n";
	//ask the user 2nd question
	std::cin >> Reais;
	//save the 2nd answer as Reais

	std::cout << "Enter number of Peruvian Soles: \n";
	//ask the user 3rd question
	std::cin >> Soles;
	//save the 3rd answer as Soles

	//Currency: 
	// 1 US Dollar = 4.50 Romanian Leu
	// 1 Brazilian Real =0.21 US Dollar
	// 1 Peruvian Nuevo Sol = 0.27 US Dollar

	dollars = (4.50 * Pesos) + (0.21 * Reais) + (0.27 * Soles);
	//set up equation to calculate the currency

	std::cout << "US Dollars = $ " << dollars << "\n";
	//display the money in dollars

}
