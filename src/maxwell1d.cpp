#include "maxwell1d.hpp"

namespace Maxwell1D
{
    const double EPS0 = 8.854187817e-12;

    double chargeDensity(double dEx_dx)
    {
        return EPS0 * dEx_dx;
    }
}
