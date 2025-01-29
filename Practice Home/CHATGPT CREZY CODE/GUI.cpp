#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    int guess = 0;
    int attempts = 0;
    const int maxAttempts = 7; // Player has 7 attempts to guess the number

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have chosen a number between 1 and 100.\n";
    std::cout << "You have " << maxAttempts << " attempts to guess it.\n";

    // Game loop
    while (attempts < maxAttempts) {
        std::cout << "\nEnter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            return 0; // End the game
        }

        std::cout << "Attempts remaining: " << maxAttempts - attempts << "\n";
    }

    // If the player runs out of attempts
    std::cout << "\nSorry, you've run out of attempts. The number was " << secretNumber << ".\n";
    return 0;
}