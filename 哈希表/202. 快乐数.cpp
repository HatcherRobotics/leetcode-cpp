#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> hash;
        while(1){
            int sum = findSum(n);
            if(sum==1){
                return true;
            }
            if(hash[sum]==1){
            return false;
            }
            hash[sum]=1;
            n = sum;

        }

    }
    int findSum(int n){
        int sum=0;
        while(n){
            sum+=(n%10)*(n%10);
            n /=10;
        }
        return sum;
    }
};