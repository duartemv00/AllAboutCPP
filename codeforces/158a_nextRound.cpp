
// Created by Duarte on 20/01/2025.

// Next Round
// https://codeforces.com/problemset/problem/158/A

/*
 *
 */

#include <iostream>

int main(){
    int solution = 0;

    int n; int k;
    while (n < 1 || n > 50 || k < 1 || k > 50 || k > n) {
        std::cin >> n >> k;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] >= a[k-1] && a[i] > 0) {
            solution++;
        }
    }

    std::cout << solution;
}