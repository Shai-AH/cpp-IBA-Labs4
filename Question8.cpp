#include <iostream>
using namespace std;
int main (){
    int numcomb = 0, count = 0;
    string food;
    int quant = 0, total = 0, sum = 0;
    cout << "B = Burger:   " << "Rs.200" << endl;
    cout << "F = French Fries:   " << "Rs.50" << endl;
    cout << "P = Pizza:   " << "Rs.500" << endl;
    cout << "S = Sandwiches:   " << "Rs.150" << endl;
    cout << "Enter How Many Diffrent foods you want to order" << endl;
    cin >> numcomb;
    while(numcomb > count){
        cout << "Enter Choice: " << endl;
        cin >> food;
        cout << "Enter Quantity " << endl;
        cin >> quant;
        if(food == "B"){
            total = quant * 200;
        }
        else if(food == "F"){
            total = quant * 50;
        }
        else if(food == "P"){
            total = quant * 500;
        }
        else if(food == "S"){
            total = quant * 150;
        }
        sum = sum + total;
        count = count + 1;
    }
    cout << "Total Amount to pay: " << sum;
    
}
