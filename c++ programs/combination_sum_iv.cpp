#include<iostream>
#include<vector>
using namespace std;
class solution {
public:
int count=0;
void helper(vector<int> &nums,int target){
    if(target==0){
        count++;
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]<=target){
            helper(nums,target-nums[i]);
        }
    }
}
    int combinationSum4(vector<int>& nums, int target) {
        count=0;
        helper(nums,target);
        return count;       
    }
};
int main(){
    solution s;
    vector<int>nums={2,1,3};
    int target=35;
    cout<<"no of sets formed:"<< s.combinationSum4(nums,target)<<endl;
    return 0;
}