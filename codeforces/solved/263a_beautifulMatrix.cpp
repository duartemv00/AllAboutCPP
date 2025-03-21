
// Created by Duarte on 20/01/2025.

// Beautiful Matrix
// https://codeforces.com/problemset/problem/263/A

/*
* 5x5 matrix of 0 and a single 1
* Index from 1 to 5 from top to bottom and left to right
* In one move, apply one of these transformations:
* 1. Swap the row i with the row i+1
* 2. Swap the column i with the column i+1
* A matrix is beautiful if the single 1 is in the middle of the matrix
* Find the minimum number of moves to make the matrix beautiful
*/

#include <iostream>

int main(){
    int solutionMoves = 0;

    int matrix[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            std::cin>>matrix[i][j];
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(matrix[i][j] == 1){
                solutionMoves = abs((i+1)-3) + abs((j+1)-3);
                break;
            }
        }
    }

    std::cout << solutionMoves;
}

