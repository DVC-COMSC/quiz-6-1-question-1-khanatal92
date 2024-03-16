#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
void getTwoValues(int &begin, int &end);
bool isPrime(int num);
int getNextPrime(int begin);
int getPrevPrime(int end);

// Function to get two integer values from the user
void getTwoValues(int &begin, int &end) {
    do {
        cout << "Enter two integer values (begin < end): ";
        cin >> begin >> end;
    } while (begin >= end);
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}