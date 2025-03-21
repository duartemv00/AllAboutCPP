
// Created by Duarte on 21/01/2025.

// Bear and Big Brother
// https://codeforces.com/problemset/problem/791/A

/*
* a, b weights of Limak and Bob. a<=b.
* Every year: a*=3, b*=2
*/

#include <iostream>

int main(){
    int a,b,solution = 0;
    std::cin>>a>>b;

    while (a<=b) {
        a*=3;
        b*=2;
        solution++;
    }

    std::cout << solution;
}
