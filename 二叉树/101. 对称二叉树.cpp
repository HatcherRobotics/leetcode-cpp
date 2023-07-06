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
    bool compare(TreeNode*left,TreeNode*right)
    {
        if((left==nullptr && right!=nullptr) ||(right==nullptr && left!=nullptr))
        {
            return false;
        }
        else if(left==nullptr && right ==nullptr)
        {
            return true;
        }
        else if(left->val!=right->val)
        {
            return false;
        }
        else if(left->val==right->val)
        {
        bool inside = compare(left->right,right->left);
        bool outside = compare(left->left,right->right);
        bool is_same = inside && outside;
        return is_same;
        }
        return false;

    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)
        {
            return true;
        }
        return compare(root->left,root->right);
    }
};