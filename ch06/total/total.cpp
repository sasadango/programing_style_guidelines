#include <iostream>

int total;  // ここまでの全数値の合計
int item;  // 合計に加算する次の数値

int main(){
    total = 0;
    while (true) {
        std::cout << "Enter # to add \n";
        std::cout << " or 0 to stop:";
        std::cin >> item;

        if (item==0)
            break;

        total += item;
        std::cout << "Total: " << total << "\n";
    }

    std::cout << "Final total " << total << "\n";
    return (0);
}