#include "fract.hpp"
#include <cmath> // ���� floor()

double fract(double x) {
    return std::abs(x - std::floor(x));
}
