#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class solution{
    public:
         string reverseword(string s){
            int n=s.length();
            string ans="";
            reverse(s.begin(),s.end());
            for(int i=0;i<n;i++){
                string word;
                while(i<n && s[i]!=' '){
                    word+=s[i];
                    i++;
                }
                reverse(word.begin(),word.end());
                if(word.length()>0){
                    ans+=" "+word;
                }
            }
            return ans.substr(1);
       }
};
int main(){
    solution r;
    string enter_word;
    cout<<"enter word:";
    getline(cin,enter_word);
    string result=r.reverseword(enter_word);
    cout<<"reverse of word:"<<result<<endl;
    return 0;
}