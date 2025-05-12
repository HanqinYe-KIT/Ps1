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
#include "catch_amalgamated.hpp"
#include "./gcd.h"
#include "fract.hpp"

TEST_CASE("Fract function", "[fract]") {
    REQUIRE(fract(3.14) == Catch::Approx(0.14));
    REQUIRE(fract(-2.7) == Catch::Approx(0.3));
    REQUIRE(fract(0.99) == Catch::Approx(0.99));
    REQUIRE(fract(-0.25) == Catch::Approx(0.75));
    REQUIRE(fract(5.0) == Catch::Approx(0.0));
}

