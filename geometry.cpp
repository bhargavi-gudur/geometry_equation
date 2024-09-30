#include "geometry.hpp"
#include <cmath>
using namespace std;

namespace Geometry {
    // Constructor to initialize the polygon with n sides
    Polygon::Polygon(const std::vector<std::pair<double, double>>& polygonPoints)
        : points(polygonPoints) {}

    // Function to calculate distance from a point to the polygon
    double Polygon::calculateDistance(double testX, double testY) const {
        double distance = 0.0;

        for (size_t i = 0; i < points.size() - 1; ++i) {
            double x0 = points[i].first;
            double y0 = points[i].second;
            double x1 = points[i + 1].first;
            double y1 = points[i + 1].second;

            double numerator = std::abs((x1 - x0) * (y0 - testY) - (y1 - y0) * (x0 - testX));
            double denominator = std::sqrt(std::pow((x1 - x0), 2) + std::pow((y1 - y0), 2));
            distance += numerator / denominator;
        }

        return distance;
    }

    // Function to check if a point is on the boundary of the polygon
    bool Polygon::isOnBoundary(double testX, double testY) const {
        double epsilon = 1e-6; // Adjust this value based on your precision requirements

        for (size_t i = 0; i < points.size() - 1; ++i) {
            double x0 = points[i].first;
            double y0 = points[i].second;
            double x1 = points[i + 1].first;
            double y1 = points[i + 1].second;

            double distance = calculateDistance(testX, testY);

            if (std::abs(distance) < epsilon) {
                // Point is on the boundary
                return true;
            }
        }

        return false;
    }

    // Function to check if a point is inside the polygon
    bool Polygon::isInside(double testX, double testY) const {
        int numVertices = static_cast<int>(points.size());
        bool inside = false;

        for (int i = 0, j = numVertices - 1; i < numVertices; j = i++) {
            double xi = points[i].first, yi = points[i].second;
            double xj = points[j].first, yj = points[j].second;

            bool intersect = ((yi > testY) != (yj > testY)) &&
                             (testX < (xj - xi) * (testY - yi) / (yj - yi) + xi);

            if (intersect)
                inside = !inside;
        }

        return inside;
    }
}
