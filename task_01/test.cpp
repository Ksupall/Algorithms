#include "gtest/gtest.h"
#include "main.hpp"
#include <cstring>
#include <iostream>

#define EXPECT_ARRAY_EQ(TARTYPE, reference, actual, element_count) \
    {\
    TARTYPE* reference_ = static_cast<TARTYPE *> (reference); \
    TARTYPE* actual_ = static_cast<TARTYPE *> (actual); \
    for(int cmp_i = 0; cmp_i < element_count; cmp_i++ ){\
      EXPECT_EQ(reference_[cmp_i], actual_[cmp_i]);\
    }\
    }

TEST(check_sorting, one_elem)
{
	std::vector<int> v = {5};
	std::vector<int> ac = {5};
	sorting(v.size(), v);
	EXPECT_ARRAY_EQ(int, v, ac, v.size());
}

TEST(check_sorting, two_elem)
{
	std::vector<int> v = {15, 10};
	std::vector<int> ac = {10, 15};
	sorting(v.size(), v);
	EXPECT_ARRAY_EQ(int, v, ac, v.size());
}

TEST(check_sorting, three_elem)
{
	std::vector<int> v = {15, 10, 5};
	std::vector<int> ac = {5, 10, 15};
	sorting(v.size(), v);
	EXPECT_ARRAY_EQ(int, v, ac, v.size());
}

TEST(check_sorting, four_elem)
{
	std::vector<int> v = {0, 15, 10, 5};
	std::vector<int> ac = {0, 5, 10, 15};
	sorting(v.size(), v);
	EXPECT_ARRAY_EQ(int, v, ac, v.size());
}

TEST(check_sorting, already_sorted)
{
	std::vector<int> v = {0, 5, 10, 15, 20};
	std::vector<int> ac = {0, 5, 10, 15, 20};
	sorting(v.size(), v);
	EXPECT_ARRAY_EQ(int, v, ac, v.size());
}

TEST(check_sorting, back_sorted)
{
	std::vector<int> v = {20, 15, 10, 5, 0};
	std::vector<int> ac = {0, 5, 10, 15, 20};
	sorting(v.size(), v);
	EXPECT_ARRAY_EQ(int, v, ac, v.size());
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}