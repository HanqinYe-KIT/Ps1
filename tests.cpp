#define _USE_MATH_DEFINES
#include <cmath>

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


#include "zylinder.hpp"

TEST_CASE("ZylinderVolumen calculation", "[zylinder]") {
    REQUIRE(zylinderVolumen(1.0, 1.0) == Catch::Approx(M_PI));
    REQUIRE(zylinderVolumen(2.0, 3.0) == Catch::Approx(12.0 * M_PI));
}

TEST_CASE("ZylinderOberflaeche calculation", "[zylinder]") {
    REQUIRE(zylinderOberflaeche(1.0, 1.0) == Catch::Approx(4.0 * M_PI));
    REQUIRE(zylinderOberflaeche(2.0, 3.0) == Catch::Approx(2 * M_PI * 2 * 2 + 2 * M_PI * 2 * 3));
}

#include "zinsen.hpp"

TEST_CASE("ZinsenBerechnen calculation", "[zinsen]") {
    REQUIRE(zinsenBerechnen(1000.0, 0.05, 0) == Catch::Approx(1000.0));
    REQUIRE(zinsenBerechnen(1000.0, 0.05, 1) == Catch::Approx(1050.0));
    REQUIRE(zinsenBerechnen(1000.0, 0.05, 2) == Catch::Approx(1102.5));
    REQUIRE(zinsenBerechnen(500.0, 0.10, 3) == Catch::Approx(665.5).epsilon(0.01));
}
