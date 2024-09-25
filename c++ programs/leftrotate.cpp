// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int first=arr[0];
//     for(int i=0;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[n-1]=first;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
//}
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter key";
    cin>>k;
    int first=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
    for(int i=0;i<k;i++){      
          cout<<arr[i]<<" ";
    }
    return 0;
}    
// #include <iostream>
// using namespace std;

// void leftRotateByOne(int arr[], int n) {
//     int temp = arr[0];
//     for (int i = 0; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     arr[n - 1] = temp;
// }

// void leftRotate(int arr[], int n, int k) {
//     for (int i = 0; i < k; i++) {
//         leftRotateByOne(arr, n);
//     }
// }

// int main() {
//     int n, k;

//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter the number of positions to rotate: ";
//     cin >> k;

//     // Ensure k is within the bounds of the array length
//     k = k % n;

//     leftRotate(arr, n, k);

//     cout << "Array after left rotation: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
