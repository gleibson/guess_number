#include<iostream>
#include<time.h>
#include<cstdlib>

/*
void game::test_num(int g, int n) 
{
    srand(time(0));
    number = rand() % 1000 + 1;

    std::cout << number; 

    //std::cout << "Enter the number: ";
    //std::cin >> guess;
    /*do {
        
        if (guess < number)
        {
            std::cout << "Is less than this" << std::endl;
        }
        else if (guess > number)
        {
            std::cout << "Is more than this" << std::endl;

        }
        else
        {
            std::cout << "This is the number" << std::endl;
        }
    } while (guess != number);
   
}*/

int main()
{   
    int number;
    int guess;
    
    //Without that the function rand always will choose the same number 
    //Function to make the computer choose a number between 1 and 1000
    srand(time(0)); 
    number = rand() % 1000 + 1; 

    std::cout << number << std::endl;

    do { //conditional do while the guess 

        std::cout << "Enter the number: "; //loop which stop when the guess number is correct
        std::cin >> guess;

        if (guess < number)
        {
            std::cout << "Is more than this" << std::endl;
        }
        else if (guess > number)
        {
            std::cout << "Is less than this" << std::endl;

        }
        else
        {
            std::cout << "This is the number" << std::endl;
        }
       
    } while (guess != number);
    system("PAUSE");
    //function which push pause message to the system to stop the conditionals
    
    return 0;

}

