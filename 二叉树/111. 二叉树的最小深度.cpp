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
    int minDepth(TreeNode* root) {
        if(root==nullptr)
        {
            return 0;
        }
        if(root->left!=nullptr && root->right==nullptr)
        {
            return 1+minDepth(root->left);
        }
        if(root->right!=nullptr && root->left==nullptr)
        {
            return 1+minDepth(root->right);
        }        
        return 1+min(minDepth(root->left),minDepth(root->right));
    }
};