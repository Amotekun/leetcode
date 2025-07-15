#include <iostream>

#include "../solutions/trees/94_binary_tree_inorder_traversal_recursive.cpp"
#include "../utils/TreeNode.hpp"

int main() {
    TreeNode* node3 = new TreeNode(3);
    TreeNode* node2 = new TreeNode(2, node3, nullptr);
    TreeNode* root = new TreeNode(1, nullptr, node2);

    Solution sol;
    std::vector<int> output = sol.inorderTraversal(root);

    std::cout << "Inorder Traversal: ";
    for (int val : output) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
