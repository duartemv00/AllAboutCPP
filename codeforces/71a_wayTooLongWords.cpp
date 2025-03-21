
// Created by Duarte on 20/01/2025.

// Way Too Long Words
// https://codeforces.com/problemset/problem/71/A

/*
* A word too long if its length is strictly more than 10 char
* Shorten it by writing the first and last letter, and the number of letters between them
*/

#include <iostream>

int main(){
    int numberOfWords;
    std::cin >> numberOfWords;

    std::string words[numberOfWords];

    for(int i = 0; i < numberOfWords; i++){
        std::cin >> words[i];
    }

    for(int i = 0; i < numberOfWords; i++){
        words[i].size() > 10 ? std::cout <<
            words[i][0] << // First letter
                words[i].size() - 2 << // Number of letters between the first and last
                    words[i][words[i].size() - 1] << '\n' // Last letter
        : std::cout << words[i] << '\n'; // The word itself
    }
}
