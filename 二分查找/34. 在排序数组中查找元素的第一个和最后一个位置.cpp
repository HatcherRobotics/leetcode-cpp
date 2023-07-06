#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftIdx = binarySearch(nums,target,true);
        int rightIdx = binarySearch(nums,target,false)-1;
        if(rightIdx<nums.size() && leftIdx<=rightIdx && nums[rightIdx]==target && nums[leftIdx]==target){
            return vector<int>{leftIdx,rightIdx};
        }
        return vector<int>{-1,-1};
    }
    int binarySearch(vector<int>& nums, int target,bool lower){
        int len = nums.size();
        int left = 0;
        int right = len-1;
        int ans = len;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid]>target || (lower && nums[mid]>=target)){
                right = mid-1;
                ans = mid;//?
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
};