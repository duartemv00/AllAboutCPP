#include <iostream>
#include <regex> // regex std library
#include <string>

int main() {
    std::string text = "Hellostop My name is Duartestop I like to use regexstop";
    std::regex pattern(R"(stop)");
    std::string replacement = ".";

    std::cout << text << '\n';
    std::cout << std::regex_replace(text, pattern, replacement) << '\n';

    return 0;
}