#include <vector>

#include "treenode.hpp"

class Solution {
   public:
    void inorder(TreeNode *node, std::vector<int> &result) {
        if (!node) {
            return;
        }
        inorder(node->left, result);
        result.push_back(node->val);
        inorder(node->right, result);
    }

    std::vector<int> inorderTraversal(TreeNode *root) {
        std::vector<int> result;
        inorder(root, result);
        return result;
    }
};
