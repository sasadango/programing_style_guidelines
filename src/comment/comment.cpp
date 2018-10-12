#include <iostream>

int height; /* 三角形の高さ */ 
int width; /* 三角形の底辺 */
int area; /* 計算される三角形の面積 */

int main(){
    std::cout << "Enter with height? ";
    std::cin >> width >> height;
    area = (width * height) / 2;
    std::cout << "The area is " << area << '\n';
    return (0);
}