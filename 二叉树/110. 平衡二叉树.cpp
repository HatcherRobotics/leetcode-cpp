struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int GetHeight(TreeNode*node)
    {
        if(node == nullptr)
        {
            return 0;
        }
        int left = GetHeight(node->left);
        int right = GetHeight(node->right);
        if(left==-1 || right==-1)
        {
            return -1;
        }
        else if(abs(left-right)>1)
        {
            return -1;
        }
        return 1+max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        if(GetHeight(root)==-1)
        {
            return false;
        }
        return true;
    }
};