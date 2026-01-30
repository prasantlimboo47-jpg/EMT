#include <iostream>
#include "emlaws.hpp"

int main()
{
    double q1 = 1e-6;
    double q2 = 2e-6;
    double r = 0.05;

    std::cout << "Coulomb Force: "
              << EMLaws::coulombForce(q1, q2, r)
              << " N\n";

    double current = 10.0;
    double distance = 0.1;

    std::cout << "Ampere Magnetic Field: "
              << EMLaws::ampereMagneticField(current, distance)
              << " T\n";

    std::cout << "Biot-Savart Magnetic Field: "
              << EMLaws::biotSavart(current, distance)
              << " T\n";

    double charge = 1e-6;
    std::cout << "Electric Flux (Gauss Law): "
              << EMLaws::gaussElectricFlux(charge)
              << " Nm^2/C\n";

    return 0;
}
