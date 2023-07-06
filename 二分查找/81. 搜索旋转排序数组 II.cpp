#include<vector>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0;
        int right = len-1;
        if(len==0)
        {
            return false;
        }
        if(len==1)
        {
            return nums[0]==target ? true : false;
        }
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[left]==nums[right] && nums[left]==nums[mid]){
                left++;right--;
            }
            else if(nums[left]<=nums[mid]){//?
                if(target>=nums[left] && target<nums[mid]){
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }
            else{
                if(target<=nums[right] && target>nums[mid]){
                    left = mid+1;
                }
                else{
                    right=mid-1;
                }
            }
        }
        return false;
    }
};