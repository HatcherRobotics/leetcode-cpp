struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
#include<vector>
using namespace std;
class Solution {
public:
    bool compare(TreeNode*a, TreeNode*b)
    {
        if(!a && !b) return true;
        else if((a && !b)||(!a&&b)) return false;
        else if(a->val!=b->val) return false;
        else
        {
            bool check_l = compare(a->left,b->left);
            bool check_r = compare(a->right,b->right);
            return check_l && check_r;
        }

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return compare(p,q);
    }
};