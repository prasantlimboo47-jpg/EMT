#include <iostream>
#include "emlaws.hpp"
#include "maxwell1d.hpp"
#include "maxwell2d.hpp"
#include "maxwell3d.hpp"

int main()
{
    // --- Coulomb, Ampere, Biot-Savart, Gauss ---
    double q1 = 1e-6;
    double q2 = 2e-6;
    double r = 0.05;
    double current = 10.0;
    double distance = 0.1;
    double charge = 1e-6;

    std::cout << "Coulomb Force: "
              << EMLaws::coulombForce(q1, q2, r)
              << " N\n";

    std::cout << "Ampere Magnetic Field: "
              << EMLaws::ampereMagneticField(current, distance)
              << " T\n";

    std::cout << "Biot-Savart Magnetic Field: "
              << EMLaws::biotSavart(current, distance)
              << " T\n";

    std::cout << "Gauss Electric Flux: "
              << EMLaws::gaussElectricFlux(charge)
              << " Nm^2/C\n";

    // --- Maxwell 1D / 2D / 3D ---
    double dEx_dx = 100.0;
    double dEy_dy = 50.0;
    double dEz_dz = 25.0;

    std::cout << "\nMaxwell 1D Charge Density: "
              << Maxwell1D::chargeDensity(dEx_dx)
              << " C/m^3\n";

    std::cout << "Maxwell 2D Charge Density: "
              << Maxwell2D::chargeDensity(dEx_dx, dEy_dy)
              << " C/m^3\n";

    std::cout << "Maxwell 3D Charge Density: "
              << Maxwell3D::chargeDensity(dEx_dx, dEy_dy, dEz_dz)
              << " C/m^3\n";

    return 0;
}

