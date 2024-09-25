#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,2,3,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    int j=0;
    for(int i=0;i<=n;i++){
            if(arr[i]!=arr[i+1]){
                temp[j++]=arr[i];
            }temp[j++]=arr[n-1];
    } 
    for(int i=0;i<j;i++){
        cout<<arr[i]<<" ";
    }
    return 0;  
}