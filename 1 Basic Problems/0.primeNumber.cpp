#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number=11;
    bool flag = true;
    for (int i = 2; i < sqrt(number); i++)
    {
        if (number %i == 0)
        {
            cout << "Non Prime";
            flag = false;
            break;
        }

    }

    if (flag == true)
    {
        cout << "Prime";
    }
}
