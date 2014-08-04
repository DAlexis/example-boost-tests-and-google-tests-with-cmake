#include "gtest/gtest.h"

#include "example-lib.h"

TEST(SqrFunctionTesting, Test2x2)
{
    EXPECT_EQ(4, sqr(2));
}

TEST(SqrFunctionTesting, Test3x3)
{
    EXPECT_EQ(9, sqr(3));
}

TEST(SqrFunctionTesting, Test4x4)
{
    EXPECT_EQ(15, sqr(4)) << "This test should be fallen, it's ok.";
}
