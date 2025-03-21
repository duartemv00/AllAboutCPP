
// Created by Duarte on 20/01/2025.

// Problem 339A - Helpful Maths
// https://codeforces.com/problemset/problem/339/A

/*
 * Sum only with numbers 1, 2 and 3
 * Can't sum in decreasing other of operands
 * s (string) is the sum of most 100 characters long.
 */

#include <iostream>

int main( int argc, char* argv[] ){
    std::string s = "value"; std::cin >> s;

    // Solving with Selection Sort
    for (int i = 0; i<s.size(); i+=2) {
        for (int j = 0; j<s.size(); j+=2) {
            if (s[j]>s[i]) {
                const char aux = s[j];
                s[j] = s[i];
                s[i] = aux;
            }
        }
    }

    std::cout << s;
}

