add_library(tree_solutions
    94_binary_tree_inorder_traversal.cpp
    100_same_tree.cpp
    101_symmetric_tree

)

# << this line makes the header visible >>
target_include_directories(tree_solutions PUBLIC ${CMAKE_SOURCE_DIR}/utils)
