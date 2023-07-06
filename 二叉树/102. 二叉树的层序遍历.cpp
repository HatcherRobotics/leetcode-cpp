struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> layer;
        vector<vector<int>> result;
        if(root)
        {
            layer.push(root);
        }
        while(!layer.empty())//
        {
            int size = layer.size();
            vector<int> temp;
            for(int i=0;i<size;i++)
            {
                TreeNode*cur = layer.front();
                layer.pop();
                temp.push_back(cur->val);
                if(cur->left!=nullptr)
                {
                    layer.push(cur->left);
                }//忘记加条件
                if(cur->right) 
                {
                    layer.push(cur->right);
                }
            }
            result.push_back(temp);
        }
        return result;
    };
};