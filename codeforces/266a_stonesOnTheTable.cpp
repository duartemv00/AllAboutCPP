
// Created by Duarte on 21/01/2025.

// Stones on the Table
// https://codeforces.com/problemset/problem/266/A

/*
* n stones. can be red, green or blue.
* neightboring stones are if there no other stones between them.
* minimum number of stones to take out so that no two neighboring stones have the same color.
*/

#include <iostream>

int main(){
    int numberOfStones, solution = 0;
    std::string stonesColors;

    std::cin >> numberOfStones >> stonesColors;

    for(int i=0; i<numberOfStones; i++){
        bool flag = true;
        while(flag && i<numberOfStones) {
            if(stonesColors[i] == stonesColors[i+1]){
                solution++;
                i++;
                //numberOfStones--;
                // stonesColors.erase(i+1, 1);
            } else {
                flag = false;
            }
        }
    }

    std::cout << solution;
}
