#include <iostream>

/*
 * C like structure for calling srand and getting a random number
 * #include <cstdlib>
 * #include <ctime>
 * 
 * int main (void) {
 *     srand(time(0));
 * 
 *     int number1 = rand() % 10;
 *     int number2 = rand() % 20;
 * 
 *     std::cout << number1 << "\n" << number2 << std::endl;
 * 
 *     return 0;
 * }
*/

#include <random>

int main (void) {
    //? init the seed 
    std::random_device rd;
    //? Create a random number engine 
    std::mt19937 engine(rd());

    //? define the distribution from 1 to 100
    std::uniform_int_distribution<int> dist(1, 100);

    //? I just created an array to store the values onto to call later to print or to use
    int SIZE = 20; int arr[SIZE];

    for (int i = 0; i < SIZE; i++) arr[i] = dist(engine);
    for (int i = 0; i < SIZE; i++) std::cout << arr[i] << std::endl;

    return 0;
}