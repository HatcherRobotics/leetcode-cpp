#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            auto it = hash.find(nums[i]);
            if(it!=hash.end()){
                return vector<int>{i,it->second};
            }
            hash[target-nums[i]]=i;
        }
        return{};
    }
};