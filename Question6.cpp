#include <iostream>
using namespace std;
int main(){
    char coffee, size, make;
    cout << "Enter Coffee B = Black / W = White: " << endl;
    cin >> coffee;
    cout << "Enter Cup Size S = Single / D = Double: " << endl;
    cin >> size;
    cout << "Enter M = Manual / A = Automatic" << endl;
    cin >> make;
    if(make == 'M' || make == 'm'){ // Manual = Person Makes so no specified time!
        cout << "Please wait the coffee is being made! ";
    }
    else if (make == 'A' || make == 'a'){ //Auto
        if(size == 'S' || size == 's'){ //Single
            if(coffee == 'W' || coffee == 'w'){ //White
                cout << "Putting Water - 15 mins" << endl;
                for(int i = 0; i <= 100000; i++){ //Big Loops used here for short delay
                }
                cout << "Adding Sugar - 15 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Mixing Well - 20 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Adding Coffee - 2 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Adding Milk - 4 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Done! Heres your coffee!" << endl;
            }
            else if(coffee == 'B' || coffee == 'b'){ //Black
                cout << "Putting Water - 20 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Adding Sugar - 20 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Mixing Well - 25 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Adding Coffee - 15 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Adding Milk - 0 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Done! Heres your coffee!" << endl;
            }
        }
        else if(size == 'D' || size == 'd'){ //Double
            if(coffee == 'W' || coffee == 'w'){
                cout << "Putting Water - 30 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Adding Sugar - 30 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Mixing Well - 40 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Adding Coffee - 4 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Adding Milk - 8 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Done! Heres your coffee!" << endl;
            }
            else if(coffee == 'B' || coffee == 'b'){
                cout << "Putting Water - 40 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Adding Sugar - 40 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Mixing Well - 50 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Adding Coffee - 30 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Adding Milk - 0 mins" << endl;
                for(int i = 0; i <= 100000; i++){
                }
                cout << "Done! Heres your coffee!" << endl;
            }
        }
    }
}
