
// Created by Duarte on 30/01/2025.

// Farmer John's Card Game
// https://codeforces.com/problemset/problem/2060/B

/**
* n cows
* deck: n * m cards. numbered from 0 to n*m-1
* m cards to each cow
* play 1 card per round
* determine permutation (p) of length n, so that pi cow will be the ith cow to place a card
* permutation of length n: contains each integer from 1 to n exactly once
* To place a card, the number of the card must be grater that the number on the center pile (starting at -1)
* Does there exist p such that it is possible for all of his cows to empty their deck after playing all m rounds of the game?
* If so, output any valid p. Otherwise, output −1
*/

#include <iostream>

int main(){
    int t; std::cin >> t; // number of test cases
    std::string solutions[t]; // solutions for each test case

    for (int i = 0; i < t; i++) { // for each test case


        int cows, cards; std::cin >> cows >> cards; // number of cows and cards per cow

        // Retrieve the cards each cow has
        int a[cows][cards]; // cards each cow has
        for (int j = 0; j < cows; j++) {
            for (int k = 0; k < cards; k++) {
                std::cin >> a[j][k];
            }
        }

        // Order the cards of each cow
        for (int j = 0; j < cows; j++) {
            // card ordination algorithm in cow j
            for (int k = 0; k < cards; k++) {
                for (int r = k+1; r < cards; r++) {
                    if (a[j][r] < a[j][k]) {
                        int aux = a[j][k];
                        a[j][k] = a[j][r];
                        a[j][r] = aux;
                    }
                }
            }
        }

        if (cards > 1) {
            // Check cow order consistency between rounds
            for (int j = 0; j < cows; j++) {
                for (int k = 1; k < cards; k++) {
                    if (a[j][k] != a[j][k-1] + cows) {
                        solutions[i] = "-1";
                    }
                }
            }
        }

        if (solutions[i] != "-1") {
            int minValue = 2000, lastMinValue = -1, solution = 0;
            for (int j = 0; j < cows; j++) {
                for (int k = 0; k < cows; k++) {
                    if (a[k][0] < minValue && a[k][0] > lastMinValue) {
                        minValue = a[k][0];
                        solution = k;
                    }
                }
                lastMinValue = minValue;
                minValue = 2000;
                solutions[i] += std::to_string(solution+1) + " ";
            }
        }
    }

    // Print all solutions
    for (std::string s : solutions) {
        std::cout<<s<<std::endl;
    }
}


// GAME SIMULATION SOLUTION: If the cow order is consistent every round, then it is possible to empty the deck
// Consistent: never the same cow appears twice in the solution array, which is a fixed size and the values are constantly being updated
