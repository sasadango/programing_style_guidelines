#include <iostream>
using namespace std;

int main(){
    int money=0;
    int a=0, b=0, c=0;
    //int money_=0;

    cout << "金額を指定してください: ";
    cin >> money;
    
    a = money / 25;
    money = money - a * 25;
    b = money / 10;
    money = money - b * 10;
    c = money / 5;
    money = money - c * 5;

    cout << "25セント: " << a << "\n";
    cout << "10セント: " << b << "\n";
    cout << "5セント: " << c << "\n";
    cout << "1セント: " << money << "\n";
}
