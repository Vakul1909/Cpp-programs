// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {-1, 0, 1, 2, -1, -4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     cout << "sorted array will be:";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int j = i + 1;
//         int k = n - 1;
//         while (j < k){
//         int ans = arr[i] + arr[j] + arr[k];
        
//             if (ans == 0)
//             {
//                 j++;
//                 k--;
//             }
//             else if (ans > 0)
//             {
//                 k--;
//             }
//             else
//             {
//                 j++;
//             }
//         }
//         cout<<"output will be";
//     }
//     return 0;
// }
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    // Sort the array
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 2; ++i) {
        // Skip duplicates for the current element
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                // Skip duplicates for the left pointer
                while (left < right && nums[left] == nums[left + 1]) {
                    ++left;
                }
                // Skip duplicates for the right pointer
                while (left < right && nums[right] == nums[right - 1]) {
                    --right;
                }
                ++left;
                --right;
            } else if (sum < 0) {
                ++left;
            } else {
                --right;
            }
        }
    }
    return result;
}
