#include <iostream>
using namespace std;

int main() {
    int fsc, NTS;
    cout << "Enter FSC and NTS marks: " << endl;
    cin >> fsc >> NTS;
    if(NTS > 70 && fsc > 70){
        cout << "Oxford University IT" << endl;
    }
    if(NTS > 70 && fsc > 60){
        cout << "Electronics" << endl;
    }
    if(NTS > 70 && fsc > 50){
        cout << "Telecommunications" << endl;
    }
    if((fsc < 70 && fsc > 60) && (NTS > 50)){
        cout << "MIT IT" << endl;
    }
    if((fsc < 59 && fsc > 50) && (NTS > 50)){
        cout << "Chemical" << endl;
    }
    if((fsc > 40 && fsc < 50) && (NTS > 50)){
        cout << "Chemical" << endl;
    }
}
