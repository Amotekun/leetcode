add_executable(test_inorder test_94_inorder.cpp)
target_link_libraries(test_inorder gtest_main tree_solutions)
target_include_directories(test_inorder PRIVATE ../../utils)

include(GoogleTest)
gtest_discover_tests(test_inorder)
