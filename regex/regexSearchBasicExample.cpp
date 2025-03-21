#include <iostream>
#include <regex> // regex std library
#include <string>

int main() {
    std::string text = "The price is $123.45";
    std::regex pattern(R"(\$\d+\.\d{2})");

    std::smatch match;

    if (std::regex_search(text, match /*optional*/, pattern)) {
        std::cout << "Match found!\n";
        std::cout << "Match found: " << match.str() << '\n';
        std::cout << "Match position: " << match.position() << '\n';
    }

    return 0;
}