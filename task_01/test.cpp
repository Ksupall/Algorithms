#include "gtest/gtest.h"
#include "sorting.hpp"
#include <cstring>

TEST(check_sorting, one_elem)
{
	std::vector<int> v = {5};
	std::vector<int> ac = {5};
	unsigned int n = v.size();
	sorting(n, v);
	for (size_t i = 0; i < n; i++)
		EXPECT_EQ(v[i], ac[i]);
}

TEST(check_sorting, two_elem)
{
	std::vector<int> v = {15, 10};
	std::vector<int> ac = {10, 15};
	unsigned int n = v.size();
	sorting(n, v);
	for (size_t i = 0; i < n; i++)
		EXPECT_EQ(v[i], ac[i]);
}

TEST(check_sorting, three_elem)
{
	std::vector<int> v = {15, 10, 5};
	std::vector<int> ac = {5, 10, 15};
	unsigned int n = v.size();
	sorting(n, v);
	for (size_t i = 0; i < n; i++)
		EXPECT_EQ(v[i], ac[i]);
}

TEST(check_sorting, four_elem)
{
	std::vector<int> v = {0, 15, 10, 5};
	std::vector<int> ac = {0, 5, 10, 15};
	unsigned int n = v.size();
	sorting(n, v);
	for (size_t i = 0; i < n; i++)
		EXPECT_EQ(v[i], ac[i]);
}

TEST(check_sorting, already_sorted)
{
	std::vector<int> v = {0, 5, 10, 15, 20};
	std::vector<int> ac = {0, 5, 10, 15, 20};
	unsigned int n = v.size();
	sorting(n, v);
	for (size_t i = 0; i < n; i++)
		EXPECT_EQ(v[i], ac[i]);
}

TEST(check_sorting, back_sorted)
{
	std::vector<int> v = {20, 15, 10, 5, 0};
	std::vector<int> ac = {0, 5, 10, 15, 20};
	unsigned int n = v.size();
	sorting(n, v);
	for (size_t i = 0; i < n; i++)
		EXPECT_EQ(v[i], ac[i]);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}