/**
Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself.
For example, 153 is an Armstrong number because
153 = 1*1*1 + 5*5*5 + 3*3*3
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Any Number"<<endl;
    cin>>num;
    int sum = 0;
    int original = num;
    while (num > 0)
    {
        int lastDigit = num % 10;
        sum = sum + pow(lastDigit, 3);
        num = num / 10;
    }
    if (original == sum)
    {
        cout <<"Armstrong Number";
    }
    else
    {

        cout << "Non Armstrong Number";
    }

    return 0;
}
