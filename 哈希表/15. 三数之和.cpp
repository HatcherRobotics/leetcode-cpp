#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        //1.排序
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            //2.第一个数大于0不可能存在答案
            if(nums[i]>0){
                return result;
            }
            //3.i去重
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            //4.另外两数
            int left = i+1;
            int right = nums.size()-1;
            while(right>left){
            //5.和过大
            if(nums[i]+nums[left]+nums[right]>0){
                right--;
            }
            //6.和过小
            else if(nums[i]+nums[left]+nums[right]<0){
                left++;
            }
            //7.找到解
            else{

                result.push_back({nums[i],nums[left],nums[right]});
                //8.左去重
                while(right>left && nums[right]==nums[right-1]){
                    right--;
                }
                //9.右去重
                while(right>left && nums[left]==nums[left+1]){
                    left++;
                }
                left++;right--;
            }
            }

        }
        return result;
    }
};