#include<iostream>
#include<vector>
using namespace std;
bool ispossible(vector<int> &arr,int n,int m,int mid){
    int stud=1,pages=0;
    for(int i=0;i<n;i++){
        if(pages+arr[i]<=mid){
            pages=+arr[i];
        }else{
            stud++;
            pages=arr[i];
        }
    }return stud<=m;
}
int booksallocate(vector<int> &arr,int n,int m){
    int sum=0 , minval=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }int s=minval, e=sum, ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={15,17,20};
    int n=4,m=2;
    cout<<booksallocate(arr,n,m)<<endl;
    return 0;

}