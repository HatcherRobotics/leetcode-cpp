#include<string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string y = to_string(x);
        int s = y.length();
        for(int i =0;i<s;i++){
            if(y[i]!=y[s-1-i]){
                return false;
            }
        }
        return true;
    }
};