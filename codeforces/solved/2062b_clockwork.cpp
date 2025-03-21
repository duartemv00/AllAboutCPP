//
// Created by Duarte on 10/02/2025.
//
// Clockwork
// https://codeforces.com/problemset/problem/2062/B

/*
* n clocks arranged in line.
* initial time of the i-th clock is ai
* Each second:
*     - Clock's time decreases by 1. If any reaches 0, you lose
*     - Decide if you want to move to an adjacent clock or stay in the same one
*     - You can reset the clock to its initial value.
* Note that the above events happen in order. If the time of a clock reaches 0
* in a certain second, even if you can move to this clock and reset its time during that second, you will still lose.
*
* it is possible to continue this process indefinitely without losing?
*/

#include <algorithm>
#include <iostream>

int main(){
    int t = 0; std::cin >> t; // Number of test cases
    for (int j = 0; j<t; j++) {
        int c = 0; std::cin >> c; // Number of clocks

        int k[c]; // Initial time of each clock
        for (int i=0; i<c; i++){
            std::cin >> k[i];
        }

        // Lose condition: Number of clocks * 2 >= min clock time
        // The minimum value a clock should have so you can go and return to it is:
        // ix2+1 if we are using iterations/movements to find it
        // nx2-1  if we are using positions to find it

        bool aux = true;
        for (int i = 0; i < c; i++) {
            if (k[i] < i*2+1 || k[i] < (c-(i+1))*2+1) {
                aux = false;
            }
        }

        if (aux) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }







}
