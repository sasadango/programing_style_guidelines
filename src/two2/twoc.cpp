#include <iostream>

signed char ch;  // 非常に小さい整数
                 // 範囲は-128~127

int main(){
    ch = 37;
    std::cout << "The number is " << static_cast<int>(ch) << '\n';
    return (0);
}