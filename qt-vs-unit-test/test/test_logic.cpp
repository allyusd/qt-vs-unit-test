#include "logic.h"

#include "gtest/gtest.h"

TEST(TestLogic, HelloMessage)
{
	Logic logic;

	std::string name = logic.getHelloMessage("Jian-Ching").toStdString();
	EXPECT_EQ(name, "Hello Jian-Ching");
}
