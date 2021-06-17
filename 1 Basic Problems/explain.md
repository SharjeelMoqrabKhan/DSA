# Prime Number 

* Prime number a number which can be divisible by it's own or 1 
* long story short no factors
* Algorithm
1) define any Number
2) run loop where loop start from 2 cuase if we divide by everyone can divisble so we don't need and then get number mod i if equal to zero so break loop and set flag 1 means loop terminated and if flag is zero means loop runs starting to end without getting any factors so we are getting prime numbers

``` 
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
```

# Reverse any number 
let suppose you have a number 1234 and you want to reverse it 4321 so first you have to take each last digit for that we can use 1234%10 in a loop until (1234>0) and then we take out each last digit indiviually by reversed*10+ last digit and then we rid off n/10

```
#include <iostream>
using namespace std;
int main()
{
    int num = 1234;
    int reverse = 0;
    while (num > 0)
    {  
       
        int lastdigit = num % 10; //1,2,3,4
        reverse = reverse * 10 + lastdigit; // 1) 4=0*10+4 2)43=4*10+3 3) 432=43*10+2 4)=4321*10+1
        num = num / 10; // 1) 123.4 = 123/10 2) 12.3=123/10 3) 1.2=12/10 4) 0
         
    }
    cout << reverse;
}    
```