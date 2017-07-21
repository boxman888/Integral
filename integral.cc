#include <iostream>
#include <math.h>

using namespace std;

double integral(double(*f)(double x), double a, double b, int n);

int main()
{
    cout.precision(7);
    cout << integral(cos, 0, M_PI/2, 1000);
    return 0;
}

double integral(double(*f)(double x), double a, double b, int n)
{
    double step = (b - a) / n;
    double area = 0.0;
    
    for (int i = 0; i < n; i++)
        area += f(a + (i + 0.5) * step)* step;

    return area;
}

