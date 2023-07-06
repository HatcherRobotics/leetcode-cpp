#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    static bool compare(int a, int b)
    {
        return abs(a)>abs(b);
    }
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),compare);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0 && k>0)
            {
                nums[i]=-nums[i];
                k--;
            }
        }
        if(k>0 && k%2!=0)
        {
            nums[nums.size()-1]=-nums[nums.size()-1];
        }
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            result+=nums[i];
        }
        return result;
    }
};