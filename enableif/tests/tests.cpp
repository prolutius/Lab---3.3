#include <gtest/gtest.h>
#include "enbl_if.hpp"

TEST(enable_if, for_tenth)
{         
        ASSERT_EQ(4, tenth(5.4));
}

TEST(enable_if, for_tenth_er)
{
    ASSERT_EQ(0, tenth(9));
}

TEST(enable_if, for_rounding)
{  
    ASSERT_EQ(3, rounding(3.5));
}

TEST(enable_if, for_rounding_er)
{    
    ASSERT_EQ(2, rounding(2));
}

TEST(enable_if, for_minus)
{
    ASSERT_EQ(-2, minus(2));
}

TEST(enable_if, for_minus_er)
{
    unsigned int m = 3; 

    ASSERT_EQ(m, minus(m));
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}