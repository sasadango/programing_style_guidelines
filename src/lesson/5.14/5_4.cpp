#include <iostream>

int k; // キロ
int m; // マイル

int main(){
    std::cout << "何キロメータですか" << '\n';
    std::cin >> k;

    m = (k * 0.6213712);
    std::cout << "マイルに変換すると " << m << '\n';
}