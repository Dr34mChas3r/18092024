#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    for (int number = 1000000000; number <= 2000000000; number++)
    {
        int root = sqrt(number);
        bool is_prime = true;
        for (int divider = 2; divider <= root; ++divider)
        {
            if (number % divider == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            cout << number << '\n';
        }
    }
}
