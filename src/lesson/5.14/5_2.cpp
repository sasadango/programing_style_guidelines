#include <iostream>

short int r;  // 半径
short int v;  // 体積

const int pi = 3.14;

int main(){
    std::cout << "半径を入力してください" << '\n';
    std::cin >> r;

    v = 4/3 * pi * r * r * r;
    std::cout << "球の体積は " << v << "です" << '\n';
}