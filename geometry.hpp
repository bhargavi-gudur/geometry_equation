/**
 * @file geometry.hpp
 * @author gandla bhargavi
 * @brief 
 * @version 0.1
 * @date 2024-09-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef GEOMETRY_HPP
#define GEOMETRY_HPP
#include <vector>
#include<utility>

namespace Geometry {
    class Polygon {
    private:
        std::vector<std::pair<double, double>> points;

    public:
        // Constructor to initialize the polygon with n sides
        Polygon(const std::vector<std::pair<double, double>>& polygonPoints);

        // Function to calculate distance from a point to the polygon
        double calculateDistance(double testX, double testY) const;

        // Function to check if a point is on the boundary of the polygon
        bool isOnBoundary(double testX, double testY) const;

        // Function to check if a point is inside the polygon
        bool isInside(double testX, double testY) const;
    };
}

#endif // GEOMETRY_HPP
