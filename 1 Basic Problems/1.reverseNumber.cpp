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