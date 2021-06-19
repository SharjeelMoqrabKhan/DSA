#include <iostream>
using namespace std;
int sumOfNthNumber(int n)
{
    /*
    int res=0;
    for(int i=1; i<=n; i++){
        res=res+i;
    }
    return res;
    **/ 

    // 5*(6)/2 = 15
    return n * (n + 1) / 2;
}

int main()
{
    int n;
    cout << "Enter any natural number" << endl;
    cin >> n;
    cout << sumOfNthNumber(n);
    return 0;
}
