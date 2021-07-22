#include <iostream>
using namespace std;
int factorial(int number);

int main()
{
    cout<<factorial(5);
}

int factorial(int number)
{
    int fac = 1;
    for (int i = 1; i <= number; i++)
    {
        fac *= i;
    }
    return fac;
}