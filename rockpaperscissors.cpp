#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

int main()
{

    char ans;

    std::cout << "Com > Lets play rock paper scissors!\nWhat do you choose, say r for rock, p for paper or s for scissors in lowercase : \n";
    std::cout << "You > ";
    std::cin >> ans;

    srand(time(NULL));

    int num = (rand() % 3) + 1; // 1 = Rock, 2 = Paper, 3 = Scissors

    if (num == 1)
    {
        switch (ans)
        {
        case 'r':
            std::cout << "*Plays Rock* Com > Oops. a draw, what a shame. Want to play again?";
            break;

        case 'p':
            std::cout << "*Plays Rock* Com > Oh no, I lost. Want to play another round?";
            break;

        case 's' || 'S':
            std::cout << "*Plays Rock* Com > Hah, I won! U want to try again?";
            break;

        default:
            break;
        }
    }
    if (num == 2)
    {
        switch (ans)
        {
        case 'r':
            std::cout << "*Plays Paper* Com > Hah, I won! U want to try again?";
            break;

        case 'p':
            std::cout << "*Plays Paper* Com > Oops. a draw, what a shame. Want to play again?";
            break;

        case 's' || 'S':
            std::cout << "*Plays Paper* Com > Oh no, I lost. Want to play another round?";
            break;

        default:
            break;
        }
    }
    if (num == 3)
    {
        switch (ans)
        {
        case 'r':
            std::cout << "*Plays Scissors* Com > Oh no, I lost. Want to play another round?";
            break;

        case 'p':
            std::cout << "*Plays Scissors* Com > Hah, I won! U want to try again?";
            break;

        case 's' || 'S':
            std::cout << "*Plays Scissors* Com > Oops. a draw, what a shame. Want to play again?";
            break;

        default:
            break;
        }
    }
}
