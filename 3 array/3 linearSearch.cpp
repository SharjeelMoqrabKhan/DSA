#include <iostream>
using namespace std;

int linearSearch(int array[], int length, int key)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int elements[] = {23, 55, 11, 22, 66};
    int len = sizeof(elements) / sizeof(elements[0]);
    int key = 11;
    cout<<linearSearch(elements,len,key);
}
