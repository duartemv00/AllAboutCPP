#include <iostream>
#include <regex> // regex std library
#include <string>

int main() {
    std::string text = "The price is $123.45";
    std::regex pattern(R"(\$\d+\.\d{2})");

    if (std::regex_search(text, pattern)) {
        std::cout << "Match found!\n";
    }

    return 0;
}