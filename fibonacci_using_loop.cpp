#include <iostream>
using namespace std;

/*
 * Algorithm Challenge & Problem Solving
 * Level 3 - Challenge #21 Fibonacci Series Using Loop
 *
 * This program prints the Fibonacci sequence up to a given number of terms using an iterative (loop-based) approach.
 *
 * The Fibonacci sequence is a mathematical series where each number is the sum of the two preceding ones:
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
 *
 * Engineering Concept:
 * - Tracking state using previous values
 * - Iterative computation instead of recursion (better performance)
 * - Clear variable naming for readability and maintainability
 */

void PrintFibonacciUsingLoop(short Number)
{
    // FiboNumber stores the current Fibonacci value
    int FiboNumber = 0;

    // Prev2 and Prev1 represent the two previous Fibonacci numbers
    int Prev2 = 0, Prev1 = 1;

    // Print the first Fibonacci number
    cout << "1   ";

    // Start from the second position since the first number is already printed
    for (int i = 2; i <= Number; i++)
    {
        // Calculate next Fibonacci number
        FiboNumber = Prev1 + Prev2;

        // Print the current Fibonacci number
        cout << FiboNumber << "   ";

        // Shift values:
        // Prev2 takes the value of Prev1
        // Prev1 takes the value of the newly calculated Fibonacci number
        Prev2 = Prev1;
        Prev1 = FiboNumber;
    }
}

int main()
{
    // Print first 10 Fibonacci numbers
    PrintFibonacciUsingLoop(10);

    cout << "\n---\n";

    // Print first 20 Fibonacci numbers
    PrintFibonacciUsingLoop(20);

    return 0;
}
