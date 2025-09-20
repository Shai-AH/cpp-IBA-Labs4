#include <iostream>
using namespace std;

int main() {
    int cal, fat, calfat;
    double per;
    cout << "Enter Calories and Fat: ";
    cin >> cal >> fat;
    while (cal < 0 || fat < 0){
        cout << "Enter Valid Calories or Fat";
        cin >> cal >> fat;
    }
    calfat = fat * 9;
    while (calfat >= cal){
        cout << "Enter Valid Calories or Fat";
        cin >> cal >> fat;
        calfat = fat * 9;
    }
    per = (calfat/cal) * 100;
    if (per < 30.0){
        cout << "Food is low of Fat!";
    }
    else{
        cout << "Food is high of Fat!";
    }
}
