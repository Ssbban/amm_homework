# MonteCarlo
This code is question 1 of the homework for the AMM lecture, using the Monte Carlo method to find the value of $\pi$.

## Descript
Generate random points in a square area of $\[-1, 1\] \times \[-1, 1\]$, then check whether each point falls inside the unit circle, and hence calculate the area of the circle by calculating the proportion of points that fall inside the circle. Finally, using the equation of the circle to calculate the value of $\pi$.

## Project structure
```
COMPO210Assignment1/
├── build/              # The excutable file
├── include/            # The header file
├── src/                # The source file
└── README.md           # This file
```

## Example
This code should run with the number of sample points and an integer seed. For example, `./MonteCarlo <n_points> <seed>`:

```bash
g++ ./src/MonteCarlo_2d.cpp -o ./build/MonteCarlo_2d
./build/MonteCarlo_2d 100000 1
```