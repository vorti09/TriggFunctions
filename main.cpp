#include <iostream>
#include "FuncA.h"

int main() {
    FuncA func;
    double result = func.calculate(1.0); // Приклад аргументу
    std::cout << "Result: " << result << std::endl;
    return 0;
}
