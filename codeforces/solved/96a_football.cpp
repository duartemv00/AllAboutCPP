
// Created by Duarte on 29/01/2025.

// Football
// https://codeforces.com/problemset/problem/96/A

/**
* If there are 7 or more consecutive characters of the same type, the situation is considered dangerous.
*/

#include <iostream>

int main(){
    std::string players; std::cin >> players;
    char lastPlayer = '5';
    int consecutivePlayers = 1;

    for (char i : players){
        if (lastPlayer == i){
            consecutivePlayers++;
            if (consecutivePlayers == 7){
                std::cout << "YES";
                return 0;
            }
        } else {
            consecutivePlayers = 1;
        }
        lastPlayer = i;
    }
    std::cout << "NO";
}