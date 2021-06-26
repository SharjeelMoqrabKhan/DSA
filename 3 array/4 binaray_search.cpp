#include <iostream>
using namespace std;

int binarySearch(int array[], int length, int key)
{
    int low = 0, high = length;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int elements[] = {12, 13, 19, 55, 91};
    int len = sizeof(elements) / sizeof(elements[0]);
    int key = 12;
    cout << binarySearch(elements, len, key);
   return 0;
}
