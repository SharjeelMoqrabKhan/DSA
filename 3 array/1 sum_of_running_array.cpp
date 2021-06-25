#include <iostream>
using namespace std;

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    for (int i = 0; i <= 5; i++)
    {
        sum += array[i];
    }
    cout << sum;
    return 0;
}