#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cover =0;
        if(nums.size()==1)
        {
            return true;
        }
        for(int i=0;i<=cover;i++)//关键
        {
            cover = max(cover,i+nums[i]);
            if(cover>=nums.size()-1)
            {
                return true;
            }
        }
        return false;
    }
};