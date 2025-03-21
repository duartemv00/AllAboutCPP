
// Created by Duarte on 20/01/2025.

// Problem: Domino Piling
// https://codeforces.com/problemset/problem/50/A

/*
* Board of MxN squares.
* Each domino covers 2x1 squares. Can be rotated.
* Place as many meet the following conditions:
* 1. Each completely covers 2 squares.
* 2. No overlap.
* 3. No touching edges of the board.
*/

#include <iostream>

int main(){
    std::cout<<"Enter the dimensions of the board: ";
    int m, n;
    std::cin>>m>>n;

    int maxDominoes = (m*n) / 2;

    std::cout<<maxDominoes;
}