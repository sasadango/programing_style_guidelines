#include <iostream>

int balance_owed; // 請求金額

int main(){
    std::cout << "Enter number of dollars owed: ";
    std::cin >> balance_owed;

    if (balance_owed == 0) // here
        std::cout << "You owe nothing.\n";
    else
        std::cout << "You owe " << balance_owed << " dollars.\n";
    return (0);
}
