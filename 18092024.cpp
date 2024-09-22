#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    for (int number = 1000000000; number <= 2000000000; number++)
    {
        bool is_prime = true;
     
        for (int divider = 2; divider < number; divider++)
        {
            if (number % divider == 0)
            {
                is_prime = false;
                break;
            }
            int root = sqrt(number);
            if (root % divider == 0) {
                is_prime = true;
                break;
            }
        }

        if (is_prime)
        {
            cout << number << '\n';
        }
    }
}
