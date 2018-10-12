#include <iostream>

int x;  // 入力時間（分）

int h;  // 時
float m;  // 分

int main(){
    std::cout << "何分ですか？" << '\n';
    std::cin >> x;

    h = x / 60;
    //std::cout << h;
    m = x - h * 60;
    std::cout << h << "時間" << m << "分" << '\n';
}