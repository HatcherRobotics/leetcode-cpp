#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> hash;
        for(int j=0;j<s.length();j++){
            hash[s[j]]++;
            hash[t[j]]--;
        }
        for(auto it = hash.begin();it!=hash.end();it++){
            if(it->second!=0){
                return false;
            }
        }
        return true;
    }
};