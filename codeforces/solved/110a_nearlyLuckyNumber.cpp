
// Created by Duarte on 29/01/2025.

// Nearly Lucky Number
// https://codeforces.com/problemset/problem/110/A

/**
* Lucky numbers: Positive int whose decimal representation contains ONLY the lucky digits 4 and 7.
* Nearly lucky numbers: Positive int whose number of lucky digits is a lucky digit.
*/

#include <iostream>
#include <conio.h>

int main(){
    std::string number; std::cin >> number;

    int luckyDigits = 0;

    for (char c : number){
        if (c=='4' || c =='7'){
            luckyDigits++;
        }
    }

    if(luckyDigits == 4 || luckyDigits == 7){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    _getch();
}
