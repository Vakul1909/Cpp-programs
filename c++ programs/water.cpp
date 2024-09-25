// brute force approach 


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,8,6,2,5,4,8,3,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int area=0;
//     for(int i=0;i<n;i++){
//         for( int j=i+1;j<n;j++){
//             int width=j-i;
//             int lenght=min(arr[i],arr[j]);
//             int calarea=(width*lenght);
//             if(calarea>area){
//                 area=calarea;
//             }

//         }
//     }
//     cout<<"most water conatiner area will be:"<< area;
//     return 0;
// }
// output will be
//  49




// optimal solution

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int area=0;
    int i=0,j=n-1;
    while(i<j){
        int width=j-i;
        int lenght=min(arr[i],arr[j]);
            int calarea=(width*lenght);
            if(calarea>area){
                area=calarea;
            }
            if(arr[i]<arr[j]){
                i++;
            }else{
                j--;
            }
    }
        
    cout<<"most water conatiner area will be:"<< area;
    return 0;
}


//  output will be
//  49 
