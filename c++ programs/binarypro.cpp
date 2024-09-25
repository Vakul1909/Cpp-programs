#include <iostream>
using namespace std;
int binarysearch(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;}
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
     int key;
    cout << "enter number to find:";
    cin >> key;
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
    cout << "enter list:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << binarysearch(arr, n);
    return 0;
}