#include <iostream>
#include <ctime>

int main(){

        int Guess;
        int Num;
        int Tries;
        char YesorNo;

        srand(time(NULL));
        std::cout << "iXSavage Guessing game" << std::endl;
        std::cout << "*******************************************" << std::endl;
        do {
            Tries= 10;
            Num = (rand() % 100 + 1);
        do
        {
            std::cout << "Guess a number between 1 - 100" << std::endl;
            std::cin >> Guess;
            Tries--;
            
            if (Guess > Num && Tries != 0)
            {
                std::cout << "Guess too high, try again " << Tries << " Attempt left" << std::endl;
            }
            else if (Guess < Num && Tries != 0)  
            {
                std::cout << "Guess too low, try again " << Tries << " Attempt left" << std::endl;
            }
            else if (Guess == Num)
            {
                std::cout << "You guessed correctly with " << Tries << " Attempts left"  << std::endl;
            }
            
            else {
                std::cout << "You failed to guess correctly " << Tries << " Attempts left" << std::endl;
                std::cout << "The correct answer was " << Num << std::endl;
                } 
        }
        while (Tries != 0 && Guess != Num);
        std::cout << "*******************************************" << std::endl;
        std::cout << "Do you want to play again? (Y/N): ";
        std::cin >> YesorNo;
        } while (YesorNo == 'Y' || YesorNo == 'y');

    std::cout << "Thank you for playing my Number Guessing Game!" << std::endl;


    }