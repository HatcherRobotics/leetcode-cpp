#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        unordered_map<char,int> time;
        for(int i =0;i<n;i++){
            time[s[i]]++;
        }
        for(int j=0;j<n;j++){
            if(time[s[j]]==1){
                return j;
            }
        }
        return -1;
    }
};