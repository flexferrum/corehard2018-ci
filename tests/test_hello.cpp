#include <gtest/gtest.h>
#include "hello/hello.h"

TEST(Hello, HasGreeting)
{
	EXPECT_FALSE(hello::GetGreetingMessage().empty());
}