#include <iostream>
#include <string>
#include<vector>
using namespace std;
class solution
{
public:
    int compression(vector<char> &chars)
    {
        int n = chars.size();
        int ind = 0;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            char ch = chars[i];
            while (i < n && ch == chars[i])
            {
                count++;
                i++;
            }
            if (count == 1)
            {
                chars[ind++] = ch;
            }
            else
            {
                chars[ind++] = ch;
                string str = to_string(count);
                for (char dig : str)
                {
                    chars[ind++] = dig;
                }
            }
            i--;
        }
        chars.resize(ind);
        return ind;
    }
};
int main(){
    solution s;
    vector<char> chars={'a','a','b','b','b','f','f','f'};
    int newlength=s.compression(chars);
    for(int i=0;i<newlength;i++){
        cout<<chars[i]<<" ";
    }
    cout<<endl;
    cout<<"new length is:"<<newlength<<endl;
    return 0;
}