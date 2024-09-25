#include<iostream>
#include<vector>
#include<string>
using namespace std;
 class Solution {
public:
    bool solution(string &s, string &p,int i,int j, vector<vector<int>>&dp) {
        if(i<0 && j<0){
            return true;
        }if(i>=0 &&j<0){
            return false;
        }if(i<0 &&j>=0){
            for(int k=0;k<=j;k++){
                if(p[k]=='*'){
                    return true;
                }
            }return false;
        }if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==p[j] || p[j]=='?'){
            return dp[i][j]= solution(s,p,i-1,j-1,dp);
        }else if(p[j]=='*'){
            return dp[i][j]=solution(s,p,i,j-1,dp) || solution(s,p,i-1,j,dp);
        }else{
            return false;
        }   
    }
    bool isMatch(string s,string p){ 
        vector<vector<int>>dp(s.length(),vector<int>(p.length(),-1));  
        return solution(s,p,s.length()-1,p.length()-1,dp);
    }
};
int main() {
    Solution sol; 
    // Test case 1
    string s1 = "aa";
    string p1 = "*";
    if (sol.isMatch(s1, p1)) {
        cout << "Test case 1: Match" << endl;
    } else {
        cout << "Test case 1: No Match" << endl;
    }
    // Test case 2
    string s2 = "cb";
    string p2 = "?a";
    if (sol.isMatch(s2, p2)) {
        cout << "Test case 2: Match" << endl;
    } else {
        cout << "Test case 2: No Match" << endl;
    }
    // Test case 3
    string s3 = "adceb";
    string p3 = "*a*b";
    if (sol.isMatch(s3, p3)) {
        cout << "Test case 3: Match" << endl;
    } else {
        cout << "Test case 3: No Match" << endl;
    }    
    // Test case 4
    string s4 = "acdcb";
    string p4 = "a*c?b";
    if (sol.isMatch(s4, p4)) {
        cout << "Test case 4: Match" << endl;
    } else {
        cout << "Test case 4: No Match" << endl;
    }
    //  Test case 5
    string s5 = "avbyn";
    string p5 = "a*b?n";
    if (sol.isMatch(s5, p5)) {
        cout << "Test case 5: Match" << endl;
    } else {
        cout << "Test case 5: No Match" << endl;
    }
    return 0;
}