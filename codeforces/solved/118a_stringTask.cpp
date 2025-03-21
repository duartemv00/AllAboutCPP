
// Created by Duarte on 29/01/2025.

// String Task
// https://codeforces.com/problemset/problem/118/A

/**
* Given string: uppercase and lowercase latin letters
* - Delete vowels
* - inserts "." before each consonant
* - changes all uppercase consonants to lowercase
*/

#include <iostream>

int main(){
    std::string input; std::cin >> input;

    for (char c : input){
        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u' || c == 'Y' || c == 'y'){
            continue;
        }

        std::cout << "." << (char)tolower(c);
    }
}
