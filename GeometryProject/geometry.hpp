/**
 * @file geometry.hpp
 * @author GandlaBhargavi 
 * @brief  Header file for Geometry Project
 * @details This file contains the declaration of the Polygon class, which provides methods to calculate the distance from a point to the polygon, check if a point is on the boundary, and check if a point is inside the polygon.
 * @version 0.1
 * @date 2025-06-04 
 */
#ifndef GEOMETRY_HPP
#define GEOMETRY_HPP
#include <vector>
#include <utility>

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
