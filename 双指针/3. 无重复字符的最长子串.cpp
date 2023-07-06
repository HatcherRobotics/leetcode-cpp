#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<=1){
            return s.length();
        }
        int result = 1;
        int left = 0;
        int right=1;
        unordered_map<char,int> hash;
        while(left<s.length()-1){
            hash.clear();
            right = left+1;
            hash[s[left]]++;
            while(hash[s[right]]==0 && right<s.length()){
                hash[s[right]]++;
                result = max(result,right-left+1);
                right++;
            }
            left++;
        }
        return result;
    }
};