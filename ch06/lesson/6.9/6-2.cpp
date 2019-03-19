#include <iostream>
#include <cmath>

float score;

int main(){
    std::cout << "put in score: ";
    std::cin >> score;

    if (91 <= score)
        if (std::round(score/10) == 10)
            std::cout << "A+" << "\n";
        else
            std::cout << "A-" << "\n";
    else if (81 <= score)
        if (std::round(score/10) == 9)
            std::cout << "B+" << "\n";
        else
            std::cout << "B-" << "\n";
    else if (71 <= score)
        if (std::round(score/10) == 8)
            std::cout << "C+" << "\n";
        else
            std::cout << "C-" << "\n";            
    else if (61 <= score)
        if (std::round(score/10) == 7)
            std::cout << "D+" << "\n";
        else
            std::cout << "D-" << "\n";
    else
        std::cout << "F" << "\n";
}
