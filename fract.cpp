#include "fract.hpp"
#include <cmath> // ÓÃÓÚ floor()

double fract(double x) {
    return std::abs(x - std::floor(x));
}
