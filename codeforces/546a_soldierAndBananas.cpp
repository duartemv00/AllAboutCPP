
// Created by Duarte on 29/01/2025.

// Soldier and Bananas
// https://codeforces.com/problemset/problem/546/A

/**
* w bananas
* cost: k dollars first banana, 2k dollars second banand, and so on (i*k dollars ith banana)
* n dollars
*/

#include <iostream>

int main(){
    int k = 0, n = 0, w = 0, Solution = 0;
    std::cin >> k >> n >> w;

    for (int i = 1; i <= w; i++){
      Solution = Solution + i*k;
    }
    Solution = Solution - n;
    if (Solution < 0) {
        Solution = 0;
    }
    std::cout << Solution;
}
