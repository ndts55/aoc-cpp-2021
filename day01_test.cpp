#include <iostream>
#include <gtest/gtest.h>
#include "common.h"
#include "day01.h"

TEST(Day01Test, PartOneSmall) {
    auto small_content = read_small("01");
    EXPECT_STRNE(&small_content[0], "");
    auto expected = 7;
    auto actual = part_one(small_content);
    EXPECT_EQ(actual, expected);
}

TEST(Day01Test, PartOneBig) {
    auto big_content = read_big("01");
    auto expected = 1502;
    auto actual = part_one(big_content);
    EXPECT_EQ(actual, expected);
}

TEST(Day01Test, PartTwoSmall) {
    auto small_content = read_small("01");
    auto expected = 5;
    auto actual = part_two(small_content);
    EXPECT_EQ(actual, expected);
}

TEST(Day01Test, PartTwoBig) {
    auto big_content = read_big("01");
    auto expected = 1538;
    auto actual = part_two(big_content);
    EXPECT_EQ(actual, expected);
}
