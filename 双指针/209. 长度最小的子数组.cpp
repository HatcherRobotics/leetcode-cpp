#include<vector>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int sum = 0;
        int result = 1e8;
        while (right<nums.size())
        {
            sum+=nums[right];
            while(sum>=target){
                sum-=nums[left];
                result = min(result,right-left+1);
                left++;
            }
            right++;
        }
        return result==1e8?0:result;
        
    }
};