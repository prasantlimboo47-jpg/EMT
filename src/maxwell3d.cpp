#include "maxwell3d.hpp"

namespace Maxwell3D
{
    const double EPS0 = 8.854187817e-12;

    double chargeDensity(double dEx_dx, double dEy_dy, double dEz_dz)
    {
        return EPS0 * (dEx_dx + dEy_dy + dEz_dz);
    }
}
