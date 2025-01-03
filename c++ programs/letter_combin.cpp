#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
void helper(string digits,int start,vector<string> &ans, vector<string>&combin,string &current){
    if(digits.empty()){
        return;
    }
    if(start==digits.size()){
        ans.push_back(current);
        return;
    }
    string letters=combin[digits[start]-'0'];
    for(char letter:letters){
        current.push_back(letter);
        helper(digits,start+1,ans,combin,current);
        current.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        string current;
        vector<string> ans;
        vector<string> combin={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        helper(digits,0,ans,combin,current);
        return ans;
    }
};
int main(){
    Solution s;
    string digits="23";
    cout<<"sets are:"<< s.letterCombinations(digits)<<""<<endl;
    return 0;

}