#include <iostream>
#include <string>
#include <cmath>

void print_combinations(int n, std::string prefix = "") {
    if (n == 0) {
        std::cout << prefix << std::endl;
        return;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        print_combinations(n - 1, prefix + c);
    }
}

int main() {
    int n; std::cin >> n;

    std::cout << "There should be " 
              << static_cast<long long>(pow(26, n)) 
              << " combinations." << std::endl;

    print_combinations(n);

    return 0;
}
