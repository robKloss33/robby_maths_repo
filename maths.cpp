#include <iostream>
using namespace std;
double power(double base, int exponent)
{
    double retVal = base;
    for (int i = 0; i < exponent-1; i++)
    {
        retVal = retVal * base;
    }

    return retVal;
}

double sqrt(double num) {
    if (num < 0) {
        return -1;
    }
    if (num == 0 || num == 1) return num;

    double guess = num / 2.0;
    double prev_guess;

    do {
        prev_guess = guess;
        guess = (guess + num / guess) / 2.0;
    } while (guess != prev_guess);

    return guess;
}

int main()
{
    cout << "GitHub Test\n";
    power(2.0, 3);
    cout << sqrt(51) << endl;
}

