#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0;
        int right = len-1;
        if(nums.size()==0){
            return -1;
        }
        if(len==1){
            return nums[0]==target ? 0:-1;
        }
        while(left<=right){
            int mid  = left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>=nums[left]){
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
                    right = mid-1;
                }
            }
        }
        return -1;
    }
};