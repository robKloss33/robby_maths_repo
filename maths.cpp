#include <iostream>
using namespace std;
int power(int base, int exponent)
{
    int retVal = base;
    for (int i = 0; i < exponent-1; i++)
    {
        retVal = retVal * base;
    }

    return retVal;
}

int main()
{
    cout << "GitHub Test\n";
    cout << power(2, 3);
}

