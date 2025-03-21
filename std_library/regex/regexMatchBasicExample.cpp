#include <iostream>
#include <regex>
#include <string>

int main() {
    std::string email = "duarte.mv@gmail.com";
    std::regex validEmailPattern(R"((\w+\.\w+)@([\w.-]+)\.(\w+))");

    std::smatch match;

    if(std::regex_match(email, match, validEmailPattern)){
        std::cout << "Full match: " << /*match[0]*/ match.str() << std::endl;
        std::cout << "User: " << /*match[1]*/ match.str(1) << std::endl;
        std::cout << "Domain: " << /*match[2]*/ match.str(2) << std::endl;
        std::cout << "TLD: " << /*match[3]*/ match.str(3) << std::endl;
    } else {
        std::cout << "Invalid email" << std::endl;
    }

    return 0;
}