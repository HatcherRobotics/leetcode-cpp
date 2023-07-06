#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> result;
        unordered_map<char,int> hash;
        //找到每个字母的结尾位置
        for(int i = 0;i<s.length();i++){
            hash[s[i]]=i;
        }
        int start = 0;
        int end = 0;
        for(int j=0;j<s.length();j++){
            //确定当前所有字母的最大结尾位置
            end = max(end,hash[s[j]]);
            if(end==j){
                result.push_back(end-start+1);
                start = end+1;
            }
        }
        return result;
    }
};