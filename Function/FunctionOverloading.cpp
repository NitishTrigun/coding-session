#include <iostream>
using namespace std;

// Overloaded functions
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int multiply(int a, int b, int c) {
    return a * b * c;
}

int main() {
    cout << "multiply(5, 4) = " << multiply(5, 4) << endl;       // int version
    cout << "multiply(3.2, 2.5) = " << multiply(3.2, 2.5) << endl; // double version
    cout << "multiply(2, 3, 4) = " << multiply(2, 3, 4) << endl; // 3-arg version
    return 0;
}
