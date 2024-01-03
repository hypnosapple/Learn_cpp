/*
Problem: Harry Potter Sorting Hat Quiz
“A thousand years or more ago,
When I was newly sewn,
There lived four wizards of renown,
Whose names are still well known.”

The Hogwarts School of Witchcraft and Wizardry welcomes you! First-year students must go through the annual Sorting Ceremony.

The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school Houses each new student belongs most to:

gryffindor
hufflepuff
ravenclaw
slytherin*/

//Code: 

#include <iostream>

int main() {
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;
    //school variables

    int answer1;
    int answer2;
    int answer3;
    int answer4;
    //answer variables to save answers

    std::cout << "Let's start the Sorting Hat Quiz! \n";
    //output quiz start

    std::cout << "Q1) When I'm dead, I want people to remeber me as: \n";
    std::cout << "  1) The Good \n";
    std::cout << "  2) The Great \n";
    std::cout << "  3) The Wise \n";
    std::cout << "  4) The Bold \n";
    //Output question 1

    std::cin >> answer1;
    //save the answer

    if (answer1 == 1) {
        hufflepuff++;
    }
    else if (answer1 == 2) {
        slytherin++;
    }
    else if (answer1 == 3) {
        ravenclaw++;
    }
    else if (answer1 == 4) {
        gryffindor++;
    }
    else {
        std::cout << "Invalid input \n";
    }
    //add and save points for each different answer

    std::cout << "Q2) Dawn or Dusk? \n";
    std::cout << "  1) Dawn \n";
    std::cout << "  2) Dusk \n";
    //output question 2

    std::cin >> answer2;
    //save q2 answer to answer2

    if (answer2 == 1) {
        gryffindor++;
        ravenclaw++;
    }
    else if (answer2 == 2) {
        hufflepuff++;
        slytherin++;
    }
    else {
        std::cout << "Invalid input \n";
    }
    //add and save points for each different answer

    std::cout << "Q3) Which kind of instrument most pleases your ear? \n";
    std::cout << "  1) The violin \n";
    std::cout << "  2) The trumpet \n";
    std::cout << "  3) The piano \n";
    std::cout << "  4) The drum \n";
    //output question3

    std::cin >> answer3;
    //save question3 answer

    if (answer3 == 1) {
        slytherin++;
    }
    else if (answer3 == 2) {
        hufflepuff++;
    }
    else if (answer3 == 3) {
        ravenclaw++;
    }
    else if (answer3 == 4) {
        gryffindor++;
    }
    else {
        std::cout << "Invalid input \n";
    }
    // add and save points for q3

    std::cout << "Q4) Which road tempts your most? \n";
    std::cout << "  1) The wide, sunny grassy lane \n";
    std::cout << "  2) The narrow, dark, lantern-lit alley \n";
    std::cout << "  3) The twisting, leaf-stream path through woods \n";
    std::cout << "  4) The cobbled street lined (ancient buildings ) \n";

    //output question 4

    std::cin >> answer4;
    //save answer for question 4

    if (answer4 == 1) {
        hufflepuff++;
    }
    else if (answer4 == 2) {
        slytherin++;
    }
    else if (answer4 == 3) {
        gryffindor++;
    }
    else if (answer4 == 4) {
        ravenclaw++;
    }
    else {
        std::cout << "Invalid input \n";
    }
    //add points to each school 

    int max = 0;
    //variable to calculate maximum points
    std::string house;
    //variable represent each school

    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
    }
    //compare if gry > 0 
    if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff";
    }
    //compare huff with gry
    if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw";
    }
    //compare raven with gry and huff
    if (slytherin > max) {
        max = slytherin;
        house = "Slytherin";
    }
    //compare sly with gry, huff, and sly

    std::cout << house << "!/n";
    //output the school with the highest score

}