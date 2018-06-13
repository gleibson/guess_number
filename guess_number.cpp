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

    int* ptrguessini = &guess;
    int* ptrguess = &guess; // pointer to guess adress
    int* ptrnumber = &number; // pointer to number adress
    //std::cout << number << std::endl; to test  

    std::cout << "Guess memory address " << ptrguessini << std::endl;
    
    while (guess != number)  //conditional do while the guess is correct, which is the same value of the number
    {
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
            if(again == 'N' | again == 'n')
            {
                break;
            }
       }
    }
    
    
    system("PAUSE"); //function which push pause message to the system to stop the conditionals

   
}
/*
void test(char a)
{
    std::cout << "Do want play again? Type [y] to play again or [n] to finish" << std::endl;
    std::cin >> again;

    if (again == 'y')
    {
        Game game;
    }   
    else
    {

    }

    system("exit");

}
*/