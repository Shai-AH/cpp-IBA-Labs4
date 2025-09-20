#include <iostream>
using namespace std;

int main() {
    bool weekd, vac;
    cout << "Enter weekday (1 = yes, 0 = no): ";
    cin >> weekd;
    cout << "Enter vacation (1 = yes, 0 = no): ";
    cin >> vac;

    if (weekd == 0 || vac) {
        cout << "You can sleep";
    } else {
        cout << "You cannot sleep";
    }

}
