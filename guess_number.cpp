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

    int *ptrguess = &guess; // pointer to guess adress
    int *ptrnumber = &number; // pointer to number adress
    //std::cout << number << std::endl; to test  

    do {  //conditional do while the guess is correct, which is the same value of the number

        std::cout << "Enter the number guess between 1 and 1000: ";
        std::cin >> guess;

        if (guess < number)  //loop conditianal which stop when the guess number is correct
        {
            std::cout << ptrguess << "  Guess adress " << std::endl; //to show the address of the guess variable
            std::cout << "Is more than this" << std::endl;
        }
        else if (guess > number)
        {
            std::cout << ptrguess << "  Guess adress" << std::endl;
            std::cout << "Is less than this" << std::endl;

        }
        else if (guess < 1)
        {
            std::cout << ptrguess << "  Guess adress" << std::endl;
            std::cout << "The value to guess is between 1 and 1000" << std::endl;
        }
        else if (guess > 1000)
        {
            std::cout << ptrguess << "  Guess adress" << std::endl;
            std::cout << "The value to guess is between 1 and 1000" << std::endl;

        }
        else
        {
            std::cout << ptrguess << "  Guess adress" << std::endl;
            std::cout << ptrnumber << "  Number adress" << std::endl;
            std::cout << "This is the number" << std::endl;

            //std::cout << "Do want play again? Type [Yes] to play again or [No] to finish" << std::endl;
            //std::cin >> again; 
        }
    } while (guess != number);
    system("PAUSE");
    //function which push pause message to the system to stop the conditionals
}

