#include <iostream>

int c, f;

int main(){
    std::cout << "摂氏を入力してください" << '\n';
    std::cin >> c;

    f = 9/5 * c + 32;
    std::cout << "華氏に変換すると " << f << "です" << '\n';
}