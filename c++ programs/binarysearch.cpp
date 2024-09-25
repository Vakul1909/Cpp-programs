#include <iostream>
using namespace std;
int binarysearch(int arr[], int key, int n)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int m = (start + end) / 2;
        if (arr[m] == key)
        {
            return m;
        }
        else if (arr[m] > key)
        {
            end = m - 1;
        }
        else
        {
            start = m + 1;
        }
    }

    return -1;
}
int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;
    int arr[n];
    cout << "enter ordered list:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter number to find:";
    cin >> key;
    cout << binarysearch(arr, key, n);
    return 0;
}