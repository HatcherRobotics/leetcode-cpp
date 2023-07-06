#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> hash;
        for(int i=0;i<magazine.size();i++){
            hash[magazine[i]]++;
        }
        for(int j=0;j<ransomNote.size();j++){
            if(hash[ransomNote[j]]==0){
                return false;
            }
            if(hash[ransomNote[j]]!=0){
                hash[ransomNote[j]]--;
            }
        }
        return true;
    }
};