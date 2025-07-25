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

// // TODO: Iterative approach
// #include <stack>

// class Solution {
//    public:
//     std::vector<int> inorderTraversal(TreeNode *root) {
//         std::vector<int> result;
//         std::stack<TreeNode *> s;
//         TreeNode *curr = root;

//         while(curr != nullptr || !s.empty()) {
//             while (curr != nullptr) {
//                 s.push(curr);
//                 curr = curr->left; we go left as much as possible.
//             }
//             curr = s.top(); s.pop();
//             result.push_back(curr->val);
//             curr = curr->right;
//         }

//         return result
//     }
// }