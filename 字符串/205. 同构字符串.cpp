#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        return check(s,t)&&check(t,s);
    }
    bool check(string s, string t){
        unordered_map<char,char> hash;
        for(int i=0;i<s.length();i++){
            if(hash[s[i]]!=0 && hash[s[i]]!=t[i]){
                return false;
            }
            hash[s[i]]=t[i];
        }
        return true;
    }
};