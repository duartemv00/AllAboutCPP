
// Created by Duarte on 21/01/2025.

// Word Capitalization
// https://codeforces.com/problemset/problem/281/A

/*
* Capitalize ONLY the first letter of a word
*/

#include <iostream>

int main(){
    std::string word;
    std::cin >> word;

    if(word[0] >= 97 && word[0] <= 122){
        word[0] -= 32; // In ASCII, the difference between a lowercase and its uppercase is always 32
        // word[0] = std::toupper(word[0]); // This is another way to do it using the toupper function
    }

    std::cout << word;
}
