#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter Array Length" << endl;
    cin >> n;
    int array[n];
    int minNo=INT_MAX;
    int maxNo=INT_MIN;

    for (int i = 0; i <= n; i++)
    {
        cin >> array[i];
    }
      for (int i = 0; i <= n; i++)
    {
        cout << array[i]<<" "<<endl;

        if(array[i]>maxNo){
            maxNo = array[i];
        }

        if(array[i]<minNo){
            minNo=array[i];

        }

    }

     cout<<"MAX:"<<maxNo<<endl;
     cout<<"MIN:"<<minNo;

    return 0;
}
