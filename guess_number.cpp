#include<iostream>
#include "guess.h"


int main()
{   
     Game game;
      
    return 0;

}

Game::Game()
{   
    int* ptrguessini = &guess;
    int* ptrguess = &guess; // pointer to guess adress
    int* ptrnumber = &number; // pointer to number adress
       
    std::cout << "Guess memory address " << ptrguessini << std::endl;
    
    
    char again = 'Y';
    while (again == 'Y' || again == 'y')  //conditional do while the guess is correct, which is the same value of the number
    {
        srand(time(0)); //Without that the function rand always will choose the same number 
        number = rand() % 1000 + 1; //Function to make the computer choose a number between 1 and 1000
        //std::cout << number << std::endl; // to test  

        std::cout << "Enter the number guess between 1 and 1000: ";
        std::cin >> guess;
        std::cout << std::endl << "Guess Memory Address " << ptrguess << std::endl; //to show the address of the guess variable

        if (guess < number)  //loop conditianal which stop when the guess number is correct
        {
            std::cout << "Is more than " << guess << std::endl;

            for (int i = 0; i < guess; i++)
            {
                *ptrguess++;

            }
        }
        else if (guess > number)
        {

            std::cout << "Is less than " << guess << std::endl;

            for (int i = 0; i < guess; i++)
            {
                *ptrguess++;

            }

        }

        else
        {
            std::cout << ptrnumber << "  Number adress" << std::endl;
            std::cout << "Yes! the number is: " << guess << std::endl;

            std::cout << "Guess final memory address " << ptrguess << std::endl;
            std::cout << "Guess inital memory address " << ptrguessini << std::endl;
            std::cout << "Do want play again? [Y/N ]" << std::endl;
            std::cin >> again;

            if (again == 'n' || again == 'N') // condition to typ n and finish the game
            {
                break;
            }

            /*else if (again == 'y' || again == 'Y')
            {
                delete &guess;
                continue;
            }
            else
            {
                std::cout << "Type Y or N" << std::endl;
            }*/

        }
    }
    system("PAUSE"); //function which push pause message to the system to stop the conditionals
       
}
