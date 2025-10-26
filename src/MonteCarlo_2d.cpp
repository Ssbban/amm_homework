#include <cmath>
#include <functional>
#include <iostream>
#include <random>

bool InsideUnitCircle(double x, double y)
{
    return ((x * x + y * y) <= 1);
}

double IntegrateMonteCarlo2D(int n_points, double min, double max, int seed)
{
    int count = 0;
    double AreaSquare = std::pow((max - min), 2);

    // set up random number generator here
    std::mt19937 rng_mt(seed);
    std::uniform_real_distribution<double> uniform_dist(min, max);
    auto ran_pos = std::bind(uniform_dist, rng_mt);

    for (int i = 0; i < n_points; i++)
    {
        // generate random points here
        double x = ran_pos();
        double y = ran_pos();
        if (InsideUnitCircle(x, y))
            count++;
    }

    return static_cast<double>(count) / n_points * AreaSquare;
}

int main(int argc, char** argv)
{
    if (argc != 3)
    {
        std::cout << "You must run with the number of sample points and an integer seed." << std::endl;
        std::cout << "./MonteCarlo <n_points> <seed>" << std::endl;
        return 1;
    }

    int N_points = std::stoi(argv[1]);
    int seed = std::stoi(argv[2]);

    double UnitCircleArea = IntegrateMonteCarlo2D(N_points, -1.0, 1.0, seed);

    std::cout << "Area estimate of circle using " << N_points << " points = " << UnitCircleArea << std::endl;
    return 0;
}