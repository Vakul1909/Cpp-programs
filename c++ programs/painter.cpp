#include <iostream>
#include <vector>
using namespace std;
bool ispossible(vector<int> &arr, int n, int m, int mid)
{
    int painter = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= mid)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    return painter <= m;
}
int mintopaint(vector<int> &arr, int n, int m)
{
    int sum = 0, maxval = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxval = max(maxval, arr[i]);
    }
    int s = maxval, e = sum, ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (ispossible(arr, n, m, mid) == true)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s= mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;
    cout << mintopaint(arr, n, m) << endl;
    return 0;
}