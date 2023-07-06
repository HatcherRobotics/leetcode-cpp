#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int result=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
                int sum = nums[left]+nums[right]+nums[i];
                int sub = sum-target;
                result = abs(sub)<=abs((result-target)) ? sum : result;
                (sub>=0) ? right-- : left++;
            }
        }
        return result;
    }
};