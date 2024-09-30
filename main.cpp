#include <iostream>
#include "geometry.hpp"

int main() {
    int numSides;
    std::cout << "Enter the number of sides for the polygon: ";
    std::cin >> numSides;

    // Input your polygon points here
    std::vector<std::pair<double, double>> polygonPoints;

    for (int i = 0; i < numSides; ++i) {
        double x, y;
        std::cout << "Enter x and y for point " << i + 1 << ": ";
        std::cin >> x >> y;
        polygonPoints.push_back(std::make_pair(x, y));
    }

    Geometry::Polygon polygon(polygonPoints);

    double testX, testY;
    std::cout << "Enter the coordinates of the test point: ";
    std::cin >> testX >> testY;

    if (polygon.isOnBoundary(testX, testY)) {
        std::cout << "Point is on the boundary of the polygon." << std::endl;
    } else if (polygon.isInside(testX, testY)) {
        std::cout << "Point is inside the polygon." << std::endl;
    } else {
        std::cout << "Point is outside the polygon." << std::endl;
    }

    return 0;
}
