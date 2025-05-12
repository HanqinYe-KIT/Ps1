#define CATCH_CONFIG_MAIN
#include "catch_amalgamated.hpp"
#include "./gcd.h"

TEST_CASE("GCD calculation", "[gcd]") {
    REQUIRE(gcd(10, 5) == 5);
    REQUIRE(gcd(21, 14) == 7);
    REQUIRE(gcd(100, 10) == 10);
    REQUIRE(gcd(17, 13) == 1);
    REQUIRE(gcd(0, 5) == 5);
    REQUIRE(gcd(5, 0) == 5);
}