#include<iostream>
using namespace std;
int linearsearch(int key, int n,int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }   
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter number to find:";
    cin>>key;
cout<<linearsearch(key,n,arr); 
     return 0;   
}