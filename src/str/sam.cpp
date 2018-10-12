#include <cstring>
#include <iostream>

char first[100];  // 名
char last[100];  // 姓
char full_name[100];  // フルネーム

int main(){
    std::strcpy(first, "Steve");  // 名を初期化する
    std::strcpy(last, "Oualline");  // 姓を初期化する

    std::strcpy(full_name, first);  // full_name ="Steve"
    // std::strcpyではなくstd::strcatであることに注意
    std::strcat(full_name, " ");  // full_name ="Steve "
    std::strcat(full_name, last);  // full_name ="Steve Oualline"

    std::cout << "The full name is " << full_name << '\n';
    return (0);
}