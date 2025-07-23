#include "gmock/gmock.h"
#include "StringCompare.cpp"

TEST(tc, CheckStringLengthScore) {
    StringCompare sc;

    EXPECT_EQ(sc.getLengthScore("ASD","DSA"), 60);
}

TEST(tc, CheckStringLengthScore2) {
    StringCompare sc;

    EXPECT_EQ(sc.getLengthScore("A", "BB"), 0);
}
int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();

}