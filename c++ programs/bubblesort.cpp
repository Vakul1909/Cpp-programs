#include<iostream>
using namespace std;
int bubblesorting(int arr[],int n){
    int counter=1;
    for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;}
        }
    counter++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter values of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<bubblesorting(arr,n);
    return 0;
}