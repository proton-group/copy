#include <iostream>
#include <vector>
#include <list>
#include <gtest/gtest.h>
#include "copy.hpp"

TEST(copyTest, string)
{
    std::vector<int> a{1,2,3,4,5};
    std::vector<int> b{5,4,3,2,1};
    copy(a.begin(), a.end(), b.begin());
    for(auto i : b)
    {
        std::cout << i << std::endl;
    }
    char str[] = "memmove can be very useful......";
    copy(str+15, str+25, str+20);
    std::cout << str << std::endl;
}

int main(int argc, char *argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}