#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0; int right = numbers.size()-1;
        while(left<right && left<numbers.size()-1 && right>1){
            if(numbers[left]+numbers[right]==target){
                return vector<int>{left+1,right+1};
            }
            else if(numbers[left]+numbers[right]>target){
                right--;
            }
            else{
                left++;
            }
        }
        return vector<int>{1,2};
    }
};