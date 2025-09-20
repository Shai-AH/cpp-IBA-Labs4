#include <iostream>
using namespace std;

int main() {
    float n;
    cout << "Enter the Ritcher scale Number n: " << endl;
    cin >> n;
    if(n < 5.0){
        cout << "Little or no Damage";
    }
    else if(n >= 5.0 && n < 5.5){
        cout << "Some Damage";
    }
    else if(n >= 5.5 && n < 6.5){
        cout << "Serious Damage: walls may crack or fall";
    }
    else if(n >= 6.5 && n < 7.5){
        cout << "Disaster: Houses and Buildings may collapse";
    }
    else if(n >= 7.5){
        cout << "Catastrophic: most buildings destroyed";
    }
}
