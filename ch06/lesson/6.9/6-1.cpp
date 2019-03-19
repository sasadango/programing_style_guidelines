#include <iostream>

int score;

int main(){
    std::cout << "put in score: ";
    std::cin >> score;

    if (91 <= score)
        std::cout << "A" << "\n";
    else if (81 <= score)
        std::cout << "B" << "\n";
    else if (71 <= score)
        std::cout << "C" << "\n";
    else if (61 <= score)
        std::cout << "D" << "\n";
    else
        std::cout << "F" << "\n";
}
