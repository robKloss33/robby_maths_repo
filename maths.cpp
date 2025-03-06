#include <iostream>
using namespace std;
int nextPrime(int start)
{
    bool isPrime = false;

    start++;
    while (!isPrime) {
        for (int i = 2; i < start; i++)
        {
            if (start % i == 0)
            {
                break;
            }
            if (i == start - 1)
            {
                return start;
            }
        }

        start++;
    }
    return start;
}
double power(double base, int exponent)
{
    double retVal = base;
    for (int i = 0; i < exponent-1; i++)
    {
        retVal = retVal * base;
    }

    return retVal;
}

int main()
{
    cout << "GitHub Test\n";
    power(2.0, 3);
    cout << nextPrime(5) << endl;
}

