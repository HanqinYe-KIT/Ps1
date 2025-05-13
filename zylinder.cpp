#define _USE_MATH_DEFINES
#include "zylinder.hpp"
#include <cmath>

double zylinderVolumen(double r, double h) {
    return M_PI * r * r * h;
}

double zylinderOberflaeche(double r, double h) {
    return 2 * M_PI * r * r + 2 * M_PI * r * h;
}
