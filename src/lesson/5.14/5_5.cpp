#include <iostream>

int h;  // hour
int m;  // minute

int x;

int main(){
    std::cout << "何時間？" << '\n';
    std::cin >> h;

    std::cout << "何分？" << '\n';
    std::cin >> m;

    std::cout << "全部分に直すと " << h * 60 + m << '\n';
}