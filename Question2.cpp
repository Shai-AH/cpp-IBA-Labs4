#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter 3 Sides: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "Equilateral Triangle";
    }
    else if (a == b || b == c || c == a) {
        cout << "Isosceles Triangle";
    }
    else {
        cout << "Scalene Triangle";
    }
}
