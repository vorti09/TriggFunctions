#include <cmath>

double FuncA::calculate(double x) {
    double result = 0.0;
    for (int i = 0; i < 3; ++i) {
        double term = std::pow(x, 2 * i + 1) / std::tgamma(2 * i + 2);
        result += term;
    }
    return result;
}
