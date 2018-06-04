#include<iostream>
#include "guess.h"


int main()
{   
    
    Game game;// default construcor
    
    return 0;

}

Game::Game()
{
    //Without that the function rand always will choose the same number 
    //Function to make the computer choose a number between 1 and 1000
    srand(time(0));
    number = rand() % 1000 + 1;

    //std::cout << number << std::endl; to test  

    do {  //conditional do while the guess is correct, which is the same value of the number

        std::cout << "Enter the number guess between 1 and 1000: ";
        std::cin >> guess;

        if (guess < number)  //loop conditianal which stop when the guess number is correct
        {
            std::cout << "Is more than this" << std::endl;
        }
        else if (guess > number)
        {
            std::cout << "Is less than this" << std::endl;

        }
        else if (guess < 1)
        {
            std::cout << "The value to guess is between 1 and 1000" << std::endl;
        }
        else if (guess > 1000)
        {
            std::cout << "The value to guess is between 1 and 1000" << std::endl;

        }
        else
        {
            std::cout << "This is the number" << std::endl;
        }
    } while (guess != number);
    system("PAUSE");
    //function which push pause message to the system to stop the conditionals
}