#include<iostream>
using namespace std;
int main(){
   int arr[]={2,5,6,3,7,1,8,13,11,100,3,11,8};
   int n=sizeof(arr)/sizeof(arr[0]);
   int largestnum=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largestnum){
           largestnum=arr[i];}
    }
     cout<<"largest number is:"<<largestnum<<endl;
    int secondnum=0;
    for(int j=0;j<n;j++){
        if(arr[j]>secondnum && arr[j]!=largestnum){
            secondnum=arr[j];
        }
    }
    cout<<"second largest number is:"<<secondnum;
    return 0;
}
