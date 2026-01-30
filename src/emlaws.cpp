
#include "emlaws.hpp"

namespace EMLaws
{
    double coulombForce(double q1, double q2, double r)
    {
        return K * q1 * q2 / (r * r);
    }

    double ampereMagneticField(double current, double distance)
    {
        return (MU0 * current) / (2 * PI * distance);
    }

    double biotSavart(double current, double distance)
    {
        return (MU0 * current) / (2 * PI * distance);
    }

    double gaussElectricFlux(double charge)
    {
        return charge / EPS0;
    }
}
