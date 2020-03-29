#include "gtest/gtest.h"
#include "main.hpp"
#include <cstring>
#include <iostream>

TEST(check_sorting, one_elem)
{
	std::vector<int> v = {5};
	sorting(v.size(), v);
	ASSERT_THAT(v, ElementsAre(5));
}

TEST(check_sorting, two_elem)
{
	std::vector<int> v = {15, 10};
	sorting(v.size(), v);
	ASSERT_THAT(v, ElementsAre(10, 15));
}

TEST(check_sorting, three_elem)
{
	std::vector<int> v = {15, 10, 5};
	sorting(v.size(), v);
	ASSERT_THAT(v, ElementsAre(5, 10, 15));
}

TEST(check_sorting, four_elem)
{
	std::vector<int> v = {0, 15, 10, 5};
	sorting(v.size(), v);
	ASSERT_THAT(v, ElementsAre(0, 5, 10, 15));
}

TEST(check_sorting, already_sorted)
{
	std::vector<int> v = {0, 5, 10, 15, 20};
	sorting(v.size(), v);
	ASSERT_THAT(v, ElementsAre(0, 5, 10, 15, 20));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}