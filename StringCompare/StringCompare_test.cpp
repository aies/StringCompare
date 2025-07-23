#include "gmock/gmock.h"
#include "StringCompare.cpp"

using namespace testing;
class StringCMPFixture : public Test {
public:
    StringCompare sc;
};

TEST_F(StringCMPFixture, CheckStringLengthScore) {
    EXPECT_EQ(sc.getLengthScore("ASD", "DSA"), 60);
}

TEST_F(StringCMPFixture, CheckStringLengthScore2) {
    EXPECT_EQ(sc.getLengthScore("A", "BB"), 0);
}

TEST_F(StringCMPFixture, CheckStringLengthScore3) {
    EXPECT_EQ(sc.getLengthScore("AAABB", "BAA"), 19);
}

int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();

}