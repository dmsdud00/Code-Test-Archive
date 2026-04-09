#include <iostream>
#include <iomanip>

int main() {

    int A, B;

    std::cin >> A >> B;

    std::cout << std::fixed << std::setprecision(15);
    std::cout << (double)A/B;

    return 0; // optional
}