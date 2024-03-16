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