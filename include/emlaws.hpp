#ifndef EMLAWS_HPP
#define EMLAWS_HPP

namespace EMLaws
{
    // Physical constants
    const double PI = 3.141592653589793;
    const double K = 8.9875517923e9;
    const double MU0 = 4 * PI * 1e-7;
    const double EPS0 = 8.854187817e-12;

    // Function declarations
    double coulombForce(double q1, double q2, double r);
    double ampereMagneticField(double current, double distance);
    double biotSavart(double current, double distance);
    double gaussElectricFlux(double charge);
}

#endif


