#include<vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int result = 0;
        while(left<right){
            result = max(result,(right-left)*min(height[left],height[right]));
            height[right]<=height[left]?right--:left++;
        }
        return result;
    }
};