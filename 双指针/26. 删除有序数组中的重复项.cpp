#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        int left=0;
        int right=1;
        while(right<nums.size()){
            if(nums[left]!=nums[right]){//!=
                nums[left+1]=nums[right];
                left++;
            }
            right++;
        }
        return left+1;
    }
};