#include "gmock/gmock.h"
#include "StringCompare.cpp"

TEST(tc, CheckStringLengthScore) {
    StringCompare sc;

    EXPECT_EQ(sc.getLengthScore("ASD","DSA"), 60);
}

int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();

}