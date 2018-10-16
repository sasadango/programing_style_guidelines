#include <iostream>

int total;  // ここまでの全数値の合計
int item;  // 合計に加算する次の数値
int minus_items;  // 負数の個数

int main(){
    total = 0;
    minus_items = 0;
    while (true) {
        std::cout << "Enter # to add\n";
        std::cout << " or 0 to stop: ";
        std::cin >> item;

        if (item == 0)
            break;

        if (item < 0) {
            ++minus_items;
            continue;
        }
        total += item;
        std::cout << "Total total " << total << '\n';
    }

    std::cout << "Final total " << total << '\n';
    std::cout << "with " << minus_items << " negative items omitted\n";
    return (0);
}