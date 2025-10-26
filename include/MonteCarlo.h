#pragma once

/**
 * @brief Check if a point (x, y) is inside the unit circle, in this homework we consider
 * the circle centered at the origin (0,0) and with radius 1 within the unit square.
 *
 * @param x X coordinate of the point
 * @param y Y coordinate of the point
 */
bool InsideUnitCircle(double x, double y);

/**
 * @brief Estimate area using Monte Carlo integration in 2D.
 *
 * @param n_points Number of random points to generate
 * @param min Minimum coordinate value for the sampling square
 * @param max Maximum coordinate value for the sampling square
 * @param seed Random number generator seed
 */
double IntegrateMonteCarlo2D(int n_points, double min, double max, int seed);
