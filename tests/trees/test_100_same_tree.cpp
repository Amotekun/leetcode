#include <gtest/gtest.h>

#include "../../solutions/trees/100_same_tree.cpp"
#include "treenode.hpp"

TEST(SameTreeTest, DifferentStructure) {
    // Tree p: [1,2]
    TreeNode* p_left = new TreeNode(2);
    TreeNode* p = new TreeNode(1, p_left, nullptr);

    // Tree q: [1, null, 2]
    TreeNode* q_right = new TreeNode(2);
    TreeNode* q = new TreeNode(1, nullptr, q_right);

    Solution sol;
    bool result = sol.isSameTree(p, q);
    EXPECT_FALSE(result);
}

TEST(SameTreeTest, IdenticalTrees) {
    // Both p and q: [1,2,3]
    TreeNode* p_left = new TreeNode(2);
    TreeNode* p_right = new TreeNode(3);
    TreeNode* p = new TreeNode(1, p_left, p_right);

    TreeNode* q_left = new TreeNode(2);
    TreeNode* q_right = new TreeNode(3);
    TreeNode* q = new TreeNode(1, p_left, p_right);

    Solution sol;
    bool result = sol.isSameTree(p, q);
    EXPECT_TRUE(result);
}