#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int result = 0;
        for(int i=0;i<s.size();i++)
        {
            if((result<g.size())&&(g[result]<s[i]+1))
            {
                result++;
            }
        }
        return result;
    }
};