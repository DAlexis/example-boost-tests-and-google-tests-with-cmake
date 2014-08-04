#define BOOST_TEST_MODULE SqrTests
#include <boost/test/unit_test.hpp>

#include "example-lib.h"

BOOST_AUTO_TEST_SUITE(SqrTestsWithIntegerNumbers)

BOOST_AUTO_TEST_CASE(TestThatMustPass)
{
    BOOST_CHECK_EQUAL(4, sqr(2));
}

BOOST_AUTO_TEST_CASE(AnotherTest1)
{
    BOOST_CHECK_EQUAL(9, sqr(3));
}
BOOST_AUTO_TEST_CASE(TestThatMustFail)
{
    BOOST_CHECK_EQUAL(5, sqr(2));
}

BOOST_AUTO_TEST_CASE(AnotherTest2)
{
    BOOST_CHECK_EQUAL(16, sqr(4));
}

BOOST_AUTO_TEST_SUITE_END()
