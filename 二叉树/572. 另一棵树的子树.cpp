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
    bool compare(TreeNode*node1,TreeNode*node2)
    {
        if(!node1 && !node2) return true;
        else if((!node1 && node2) || (node1 && !node2)) return false;
        else if(node1->val!=node2->val) return false;
        else
        {
            bool l = compare(node1->left,node2->left);
            bool r = compare(node1->right,node2->right);
            return l&&r;
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)
        {
            return false;
        }
        return compare(root,subRoot) || isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};