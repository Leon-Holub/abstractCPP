#include <gtest/gtest.h>
#include <Vector.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
// Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
// Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

TEST(SoucetTest, haha) {
    auto ev = EVector(5, 5) + EVector(1, 1);
    EXPECT_EQ(ev._x, 6);
    EXPECT_EQ(ev._y, 6);
}

TEST(NormTest, TestVectorNorm) {
    auto ev = AbstractEuclidVector<EVector>::norm(EVector(3, 4));
    EXPECT_EQ(ev, 5);
}

TEST(testAngle, TestAnglu) {
    auto ev = AbstractEuclidVector<EVector>::angle(EVector(3, 4), EVector(3, 4));
    EXPECT_EQ(ev, 0);
}

