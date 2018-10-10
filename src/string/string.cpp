#include <iostream>
#include <string>

std::string first_name;
std::string last_name;
std::string full_name;

char first_ch;

int main(){
    first_name = "Steve";
    last_name = "Oualline";
    full_name = first_name + " " + last_name;
    std::cout << "Full name is " << full_name << '\n';
    
    // first_ch = first_name[0];
    std::cout << first_name.at(0) << '\n';
    std::cout << full_name << " is " << full_name.length() << " long\n";
    
    return (0);
}