#include "zinsen.hpp"
#include <cmath>

double zinsenBerechnen(double kapital, double zinssatz, int laufzeit) {
    return kapital * std::pow(1 + zinssatz, laufzeit);
}
