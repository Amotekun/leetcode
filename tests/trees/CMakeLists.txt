#First test: Inorder Traversal (94)
add_executable(test_inorder test_94_inorder.cpp)
target_link_libraries(test_inorder gtest_main tree_solutions)
target_include_directories(test_inorder PRIVATE ${CMAKE_SOURCE_DIR}/utils)

#Second test: Same Tree (100)
add_executable(test_same_tree test_100_same_tree.cpp)
target_link_libraries(test_same_tree gtest_main tree_solutions)
target_include_directories(test_same_tree PRIVATE ${CMAKE_SOURCE_DIR}/utils)

# Enable test discovery for both
include(GoogleTest)
gtest_discover_tests(test_inorder)
