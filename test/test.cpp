#include <gtest/gtest.h>
#include <funcA.h>
#include <foo/foo.h>

TEST( Test, TestOne )
{
     EXPECT_TRUE( funcA( 1, 1) );
}

TEST( Test, TestFoo )
{
     EXPECT_TRUE( foo::nequ( 1, 2 ));
}
