#include <iostream>
using namespace std;
void power(int base, int exponent)
{
    int retVal = base;
    for (int i = 0; i < exponent-1; i++)
    {
        retVal = retVal * base;
    }
    cout << retVal;
}

int main()
{
    cout << "GitHub Test\n";
    power(2, 3);
}

