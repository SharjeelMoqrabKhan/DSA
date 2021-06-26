#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int candles[5] = {2, 3, 5, 1, 3};
    int len = sizeof(candles) / sizeof(candles[0]);
    int extraCandies = 3;
    int comparred=INT_MIN;
    bool greaterCandles[5];
    int maxNumber = INT_MIN;

    // finding the maximum number in array
    for (int i = 0; i < len; i++)
    {
        if (candles[i] > maxNumber)
        {
            maxNumber = candles[i]; // 5
        }
    }

    // comparison
    for (int i = 0; i <len; i++)
    {
        comparred=extraCandies+candles[i];
        if(comparred>maxNumber){
            greaterCandles[i]={true};
            cout << greaterCandles[i];

        }
        if(comparred<maxNumber){
            greaterCandles[i]={false};
            cout <<greaterCandles[i];
        }

    }


    return 0;
}
