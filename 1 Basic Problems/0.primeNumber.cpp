#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    cin >> number;
    bool flag = 0;
    for (int i = 2; i < sqrt(number); i++)
    {
        if (number %i == 0)
        {
            cout << "Non Prime";
            break;
             flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "Prime";
    }
}