#include <iostream>
// using namespace std;
// int findmin(int arr[100], int size)
// {
//     int min = arr[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     return min;
// }
// int findmax(int arr[100], int size)
// {
//     int max = arr[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }
// int main()
// {
//     int arr[] = {1, 23, 56, 34, 78, 32, 12};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int max = findmax(arr, size);
//     // cout<<"minimum value of array:"<<min;
//     cout << "maximum value of array:" << min;
//     return 0;
// }
// #include <bits/stdc++.h>
using namespace std;
// Prints all triplets in arr[] with 0 sum
void findTriplets(int arr[], int n)
{
    bool found = false;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    cout << arr[i] << " " << arr[j] << " "
                         << arr[k] << endl;
                    found = true;
                }
            }
        }
    }
    // If no triplet with 0 sum found in array
    if (found == false)
        cout << " not exist " << endl;
}
// Driver code
int main()
{
    int arr[] = { 1, -1, 0, -3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findTriplets(arr, n);
    return 0;
}