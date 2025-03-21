
// Created by Duarte on 29/01/2025.

// Wrong Subtraction
// https://codeforces.com/problemset/problem/977/A

/**
* given int
* subtract 1 from n if the last digit is not 0
* divide by 10 if the last digit is 0
*/

#include <iostream>

int main(){
    int n, k; std::cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        if (n % 10 == 0){
            n /= 10;
        } else { n--; }
    }
    std::cout << n;
}