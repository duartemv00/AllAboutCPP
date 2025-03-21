#include <iostream>
#include <regex>
#include <string>
#include <vector>

/**
 * You can use the regex function to split a word due to a certain pattern using sregex_iterator() 
 */
std::vector<std::string> splitStringRegex(const std::string str) {
    std::vector<std::string> words;

    std::regex pattern(R"(\w+)"); // Matches words
    std::sregex_iterator it(str.begin(), str.end(), pattern);
    std::sregex_iterator end;

    while (it != end) {
        words.push_back(it->str());
        ++it;
    }

    return words;
}

int main() {
    std::string text = "Hello world! My name is Duarte.";
    std::vector<std::string> words = splitStringRegex(text);

    for(std::string word : words){
        std::cout << word << "\n";
    }

}