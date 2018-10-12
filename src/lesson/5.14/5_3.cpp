#include <iostream>

int h=3;  // 高さ
int w=4;  // 横幅
int l;  // 外周

int main(){
    l = 2 * (h + w);
    std::cout << "長方形の外周は" << l << '\n';
}