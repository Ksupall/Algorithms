#include "gtest/gtest.h"
#include "main.hpp"
#include <cstring>

TEST(check_data, wrong_year)
{
  ASSERT_EQ(0, 0);
  ASSERT_EQ(-1, -1);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}