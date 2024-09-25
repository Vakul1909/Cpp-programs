#include <iostream>
using namespace std;
// int main(){
//     int row,col;
//     cout<< "enter number of rows:";
//     cin>>row;
//     cout<<"enter number of columns:";
//     cin>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             if(i==1||i==row){
//                 cout<<"*";
//             }else if(j==1||j==col){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//          cout<<endl;
//     }
//     return 0;

// }
// int main(){
//     int n;
//     int count=1;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<count;
//             count+=1;
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }for(int j=1;j<=2*(n-i);j++){
//             cout<<" ";
//         }for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }for(int j=1;j<=2*(n-i);j++){
//             cout<<" ";
//         }for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0){
//                 cout<<"1";
//             }else{
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         for(int j=1;j<=(n-i);j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<" " ;
//         } cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=n;j++){
//             if((i+j)%4==0 || (i==2&&j%4==0)){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }cout<<endl;
//     }
//     return 0;}

// int main()
// {
//     int n = 6;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * (n - i) + 1; j++)
//         {
//             if (i == 1 || i == n)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << '*';
//                 for (int k = 0; k <= 2 * (n - i) - 1; k++)
//                 {
//                     cout << ' ';
//                 }
//                 cout << '*';
//             }
//         }
//         cout << endl;
//     }
//     return 0;
 // }


//  int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i+1;j++){
//             cout<<j;
//         }
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;

//     }
//  }


 int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }cout<<"* ";
        if(i!=0){
            for(int j=0;j<2*i-1;j++){
                cout<<"  ";
            }cout<<"* ";
            
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+2;j++){
            cout<<"  ";
        }cout<<"* ";
        if(i!=n-2){
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<"  ";
            }cout<<"* ";
            
        }
        cout<<endl;
    }
 }