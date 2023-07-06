#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        int n = strs.size();
        int l = strs[0].length();
        for(int i=0;i<l;i++){
            char flag = strs[0][i];
            for(int j=1;j<n;j++){
                if(strs[j][i]!=flag){
                    return result;
                }
            }
            result+=flag;
            }
        return result;
        }
    };