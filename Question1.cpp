#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter Number: " << endl;
    cin >> num;

    int block1 = num / 10;
    int block2 = num % 10;
    int block3 = block1 - (2 * block2);

    while (block3 != 7 && block3 != -7 && block3 != 0 && block3 % 7 != 0) {
        if (block3 <= -1000) {
            cout << "Not Divisible by 7" << endl;
            return 0;
        } else {
            num = block3;
            block1 = num / 10;
            block2 = num % 10;
            block3 = block1 - (2 * block2);
        }
    }

    if (block3 == 7 || block3 == -7 || block3 == 0 || block3 % 7 == 0) {
        cout << "Divisible by 7" << endl;
    }
}
