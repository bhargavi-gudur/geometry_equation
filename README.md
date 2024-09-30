# Geometry Polygon Handling

This project implements basic polygon handling in C++, allowing you to define a polygon with a given number of sides and check if a point is on its boundary or inside it.

## Project Structure

- **`geometry.hpp`**: Header file defining the `Polygon` class and its member functions.
- **`geometry.cpp`**: Implementation file for the `Polygon` class.
- **`main.cpp`**: Main program file to take user input for a polygon's points and test a point against it.

## How to Build

1. **Clone the repository**:
    ```bash
    git clone <repository-url>
    cd <repository-name>
    ```

2. **Compile the code**:
    You can use `g++` or any C++ compiler to compile the code. For example:
    ```bash
    g++ main.cpp geometry.cpp -o polygon_checker
    ```

3. **Run the program**:
    ```bash
    ./polygon_checker
    ```

## Usage

1. Enter the number of sides for the polygon.
2. Provide the `(x, y)` coordinates for each point of the polygon.
3. Enter the coordinates of a test point to check if it lies on the boundary or inside the polygon.

Example:
Enter the number of sides for the polygon: 4 Enter x and y for point 1: 0 0 Enter x and y for point 2: 4 0 Enter x and y for point 3: 4 4 Enter x and y for point 4: 0 4 Enter the coordinates of the test point: 2 2 Point is inside the polygon.
