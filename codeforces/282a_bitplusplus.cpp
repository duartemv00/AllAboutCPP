
// Created by Duarte on 20/01/2025.

/**
* The problem is to determine the final value of x after performing a series of operations.
* Variable x is initialized to 0.
* x++ increases the value of x by 1.
* x-- decreases the value of x by 1.
*/

#include <algorithm>
#include <iostream>

int main( int argc, char* argv[] ){

    int numOfStatements; // number of statements (1 <= n <= 150)
    std::cin >> numOfStatements;

    int x = 0;
    std::string s = "Value";

    for (int i = 0; i<numOfStatements; i++) {
        std::cin>>s; // Read the statement

        // Convert to lowercase to avoid case sensitivity
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        if (s == "x++" || s == "++x") {
            x++;
        } else if (s == "x--" || s == "--x") {
            x--;
        } else {
            std::cout << "Invalid statement" << std::endl;
        }
    }
    std::cout<< x;
}