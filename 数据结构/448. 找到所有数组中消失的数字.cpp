#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        vector<int> hash(n,1);
        for(int i=0;i<n;i++){
            //nums[i] 1~n
            hash[nums[i]-1]=-1;
        }
        for(int j=1;j<n+1;j++){
            //nums[j] 1~n
            if(hash[j-1]==1){
                result.push_back(j);
            }
        }
        return result;
    }
};