#include <iostream>
#include <random>
#include <iomanip>

int level_1(int& rand_number);
int level_2(int& rand_number);
int level_3(int& rand_number);
int user_input(int& input);
void show_menue();
void show_stats(int& input);

int main() 
{
    int difficulty_level_input = 0; 
    int rand_num = 0; 
    int input = 0; 
    int user_input_func = 0; 
    int counter = 0; 

    int num1 = level_1(rand_num); 
    int num2 = level_2(rand_num);
    int num3 = level_3(rand_num); 

    std::cout << "******************WELCOME TO MY NUMBER-GUESSING GAME******************" << std::endl; 


    std::cout << "Please enter the difficulty level: " << '\n' <<
                 "level 1 = easy"                      << '\n' <<
                 "level 2 = intermediate"              << '\n' <<
                 "level 3 = hard"                      << '\n' << std::endl; 
    std::cin >> difficulty_level_input;

    while (difficulty_level_input != 1 && difficulty_level_input != 2 && difficulty_level_input != 3)
    {
        std::cout << "invalid diffculty level! " << '\n' << 
                     "Please enter the difficulty level: " << std::endl; 
        std::cin >> difficulty_level_input;
    }

        switch(difficulty_level_input)
        {
            case 1: 
                user_input_func = user_input(input);

                if (user_input_func == num1)
                {
                    std::cout << "direct hit! " << std::endl; 
                }
                else
                {
                    while (user_input_func != num1)
                    {
                        counter++; 
                        if (user_input_func < num1)
                        {
                            std::cout << "Too small" << std::endl; 
                            std::cin >> user_input_func;
                        }
                        else
                        {
                            std::cout << "Too big" << std::endl; 
                            std::cin >> user_input_func;
                        }
                    }
                        std::cout << "Direct hit: " << '\n' <<
                                    "The wanted number was: " << num1 << '\n' <<
                                    "Your attemps: " << counter << std::endl;
                }

            break; 

            case 2: 
                user_input_func = user_input(input);

                if (user_input_func == num2)
                {
                    std::cout << "direct hit! " << std::endl; 
                }
                else
                {
                    while (user_input_func != num2)
                    {
                        counter++;
                        if (user_input_func < num2)
                        {
                            std::cout << "Too small" << std::endl; 
                            std::cin >> user_input_func;
                        }
                        else
                        {
                            std::cout << "Too big" << std::endl; 
                            std::cin >> user_input_func;
                        }
                    }
                        std::cout << "Direct hit: " << '\n' <<
                                    "The wanted number was: " << num2 << '\n' <<
                                    "Your attempts: " << counter << std::endl; 
                }

            break; 
            
            case 3: 
                user_input_func = user_input(input);

                if (user_input_func == num3)
                {
                    std::cout << "direct hit! " << std::endl; 
                }
                else
                {
                    while (user_input_func != num3)
                    {
                        counter++;
                        if (user_input_func < num3)
                        {
                            std::cout << "Too small" << std::endl; 
                            std::cin >> user_input_func;
                        }
                        else
                        {
                            std::cout << "Too big" << std::endl; 
                            std::cin >> user_input_func;
                        }
                    }
                        std::cout << "Direct hit: " << '\n' <<
                                    "The wanted number was: " << num3 << '\n' <<
                                    "Your attempts: " << counter << std::endl;    
                }

            break; 
            }

    return 0; 
}

void show_(int menue_input)
{
    std::cout << "Would you like to continue?: " << std::endl; 
    std::cin >> menue_input; 
}

/*                                                          
void show_stats(int& input)
{
    std::cout << "Your stats: " << '\n' <<                              // Idea: Store the counter-Variable into the parameter and show the stats
                 input                                                  // at the end of the game

}
*/

int user_input(int& input)
{
    std::cout << "Please enter the wanted number: " << std::endl;
    std::cin >> input; 

    return input; 
}

int level_1(int& rand_number)
{
    std::random_device rd; 
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<int> genNumber(1, 10);

    rand_number = genNumber(gen); 

    return rand_number; 
}

int level_2(int& rand_number)
{
    std::random_device rd; 
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<int> genNumber(10, 50); 

    rand_number = genNumber(gen);

    return rand_number; 
}

int level_3(int& rand_number)
{
    std::random_device rd; 
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> genNumber(50, 100); 

    rand_number = genNumber(gen);
    
    return rand_number; 
}
