//
// Created by antoine on 08/04/18.
//

#include <gtest/gtest.h>
#include "../srcs/Logger.h"

TEST(Logger, log)
{
    testing::internal::CaptureStderr();
    Logger::log("test");
    std::string output = testing::internal::GetCapturedStderr();
    EXPECT_EQ(output, "test\n");
}