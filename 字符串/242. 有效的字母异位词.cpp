#include<string>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        int hash[26]={0};
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
            hash[t[i]-'a']--;
        }
        for(int j=0;j<26;j++){
            if(hash[j]!=0){
                return false;
            }
        }
        return true;
    }
};