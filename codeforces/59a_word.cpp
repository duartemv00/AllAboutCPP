
// Created by Duarte on 29/01/2025.

// Word
// https://codeforces.com/problemset/problem/59/A

/**
* Change lettes to uppercase or lowercase
* In a way that the lesser amount of letters are changed
* If equal, change all to lowercase
*/

#include <iostream>

int main(){
    std::string word; std::cin >> word;
    int upperLetters = 0, lowerLetters = 0;
    for (char letter : word){
        if (isupper(i)) upperLetters++;
        else lowerLetters++;
    }
    if (upperLetters > lowerLetters){
        for (char& letter : word) letter = toupper(letter);
    } else {
        for (char& letter : word) letter = tolower(letter);
    }

    std::cout << word;
}