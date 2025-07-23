#include "gmock/gmock.h"
#include "StringCompare.cpp"

TEST(tc, CheckString) {

    EXPECT_EQ(1 ,1);
}

int main() {
    ::testing::InitGoogleMock();
    return RUN_ALL_TESTS();

}