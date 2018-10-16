#include <iostream>

int old_number;  // 1つ前のフィボナッチ数列
int current_number;  // 現在のフィボナッチ数列
int next_number;  //  数列の次の数

int main(){
    //  処理を開始する
    old_number = 1;
    current_number = 1;

    std::cout << "1\n";  // 最初の数を出力する

    while (current_number < 100) {

        std::cout << current_number << '\n';
        next_number = current_number + old_number;

        old_number = current_number;
        current_number = next_number;
    }
}