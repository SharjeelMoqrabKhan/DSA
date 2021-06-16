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