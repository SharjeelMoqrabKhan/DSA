#include <iostream>
using namespace std;
void plaindrome(int number);

int main()
{
    plaindrome(505);
    return 0;
}

void plaindrome(int number)
{
    int temp;
    int reverse;
    int sum = 0;
    temp=number;
    while (number > 0)
    {
        reverse = number % 10;
        sum = (sum * 10) + reverse;
        number = number / 10;
    }

    if (temp == sum)
    {
        cout << "Plaindorme";
    }
    else
    {
        cout << "Not Plaindorme";
    }
}