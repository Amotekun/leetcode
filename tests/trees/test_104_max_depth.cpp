#include <gtest/gtest.h>
#include "../../solutions/trees/104_maximum_depth_of_binary_tree.cpp"
#include "treenode.hpp"

TEST(MaxDepthTest, BasicBalancedTree) {
    // Tree:
    //     3
    //    / \
    //   9  20
    //      / \
    //     15  7

    TreeNode* n15 = new TreeNode(15);
    TreeNode* n7 = new TreeNode(7);
    TreeNode* n20 = new TreeNode(20, n15, n7);
    TreeNode* n9 = new TreeNode(9);
    TreeNode* root = new TreeNode(3, n9, n20);

    Solution sol;
    EXPECT_EQ(sol.maxDepth(root), 3);
}

TEST(MaxDepthTest, SingleNode) {
    TreeNode* root = new TreeNode(1);
    Solution sol;
    EXPECT_EQ(sol.maxDepth(root), 1);
}

TEST(MaxDepthTest, EmptyTree) {
    Solution sol;
    EXPECT_EQ(sol.maxDepth(nullptr), 0);
}
