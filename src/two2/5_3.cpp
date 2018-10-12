#include <iostream>

long int zip;  // 郵便番号

int main(){
    zip = 02137L;  // マサチューセッツ州ケンブリッジの郵便番号を使用する

    std::cout << "New York's zip code is: " << zip << '\n';
    // 02137は8進数の定数とみなされる
    // 出力の際には10進数で出力されるので1119となる
    return (0);
}