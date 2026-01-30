#include "maxwell2d.hpp"

namespace Maxwell2D
{
    const double EPS0 = 8.854187817e-12;

    double chargeDensity(double dEx_dx, double dEy_dy)
    {
        return EPS0 * (dEx_dx + dEy_dy);
    }
}
