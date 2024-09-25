#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,1,0,1,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;
    int temp;
    while(end>start){
        if(arr[start]==1){
            if(arr[end]!=1){
                temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
            }
            end--;
        }else{
            start++;
        }
    }
    cout<<"sorted array will be"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// output will be:
// 0 0 0 0 1 1 1 1 1



#include<iostream>
using namespace std;
int main(){
    int arr[]={0,6,0,3,0,9,4,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;
    int temp;
    while(end>start){
        if(arr[start]!=0){
            if(arr[end]==0){
                temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
            }
            end--;
        }else{
            start++;
        }
    }
    cout<<"sorted array will be"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";   
    }
    return 0;
}
// output will be:
// 0 0 0 0 3 9 4 6 1



#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,0,0,2,1,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int right=n-1;
    int left=0;
    int current=0;
    int temp;
    while(current<=right){
        if(arr[current]==0){
            temp=arr[current];
            arr[current]=arr[left];
            arr[left]=temp;
            left++;
            current++;
        }else if(arr[current]==2){
            temp=arr[current];
            arr[current]=arr[right];
            arr[right]=temp;
            right--;
        }else{
            current++;
        }
    }cout<<"sorted array will be"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";   
    }
    return 0;
}
// output will be
// 0 0 1 1 1 2 2 2