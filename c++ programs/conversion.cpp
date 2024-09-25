#include <iostream>
using namespace std;
// int binarytodecimal(int n){
//     int ans=0;
//     int y=1;
//     while(n>0){
//         int x=n%10;
//         ans+=y*x;
//         y*=2;   //for octal to decimal we only have to change the 2 by 8 in 9th line
//         n/=10;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<binarytodecimal(n)<<endl;}

// int decimaltobinary(int n)
// {
//     int dectobin[32];
//     int i = 0;
//     while (n > 0)
//     {
//         dectobin[i] = n % 2;
//         n /= 2;
//         i++;
//     }
//     for (int j = i - 1; j >= 0; j--)
//     {
//         cout << dectobin[j] << endl;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << decimaltobinary(n) << endl;}

// #include <iostream>  
// using namespace std;  
// int main()  
// {  
    
//    int a[10], n, i;    
// cout<<"Enter the number to convert: ";    
// cin>>n;    
// for(i=0; n>0; i++)    
// {    
// a[i]=n%2;    
// n= n/2;  
// }    
// cout<<"Binary of the given number= ";    
// for(i=i-1 ;i>=0 ;i--)    
// {    
// cout<<a[i];    
// }    




// int main(){
//     int a[32],n;
//     cout<<"enter number to convert:";
//     cin>>n;
//     int i=0;
//     // char c;
//     while(n>0){
//         a[i]=n%16;
//         if(a[i]>=10){
//             int lastdigit=a[i]%10;
//             char c='A'+lastdigit;
//             cout<<c;
//         }else{
//             cout<<a[i];
//         }
//         n/=16;
//         i++;   
//     }
// }



// C++ program to convert a decimal
// number to hexadecimal number
#include <iostream>
using namespace std;
// function to convert decimal to hexadecimal
string decToHexa(int n)
{
	// ans string to store hexadecimal number
	string ans = "";
	while (n != 0) {
		// remainder variable to store remainder
		int rem = 0;
		// ch variable to store each character
		char ch;
		// storing remainder in rem variable.
		rem = n % 16;
		// check if temp < 10
		if (rem < 10) {
			ch = rem + 48;
		}
		else {
			ch = rem + 55;
		}
		// updating the ans string with the character variable
		ans += ch;
		n = n / 16;
	}
	// reversing the ans string to get the final result
	int i = 0, j = ans.size() - 1;
	while(i <= j)
	{
	swap(ans[i], ans[j]);
	i++;
	j--;
	}
	return ans;
}
// Driver code
int main()
{
	int n=2545;
    // cout<<n;
	cout << decToHexa(n);
	return 0;
}
