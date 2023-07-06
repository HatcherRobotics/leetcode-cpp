#include<string>
using namespace std;
class Solution {
public:
    int countBinarySubstrings(string s) {
        int result=0;
        int left=0;
        int i = 0;
        while(i<s.length()){
            int right=0;
            char flag = s[i];
            while(s[i]==flag && i<s.length()){
                right++;
                i++;
            }
            result+=min(right,left);
            left = right;
        }
        return result;
    }
};