#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    float xa, ya;
    float xb, yb;
    float xc, yc;

    std::cout << "Enter coordinates of point A (xa ya): ";
    std::cin >> xa >> ya;
    std::cout << "Enter coordinates of point B (xb yb): ";
    std::cin >> xb >> yb;
    std::cout << "Enter coordinates of point C (xc yc): ";
    std::cin >> xc >> yc;

    float ab = std::sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
    float bc = std::sqrt((xc - xb) * (xc - xb) + (yc - yb) * (yc - yb));
    float ca = std::sqrt((xa - xc) * (xa - xc) + (ya - yc) * (ya - yc));

    float perimeter = ab + bc + ca;
    float area = std::fabs(
        (xa * (yb - yc) + xb * (yc - ya) + xc * (ya - yb)) / 2.0f
    );

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "\nTriangle side lengths:\n";
    std::cout << "AB = " << ab << "\n";
    std::cout << "BC = " << bc << "\n";
    std::cout << "CA = " << ca << "\n";
    std::cout << "Perimeter = " << perimeter << "\n";
    std::cout << "Area = " << area << "\n";

    return 0;
}
