
// Created by Duarte on 17/02/2025.

// Game of Mathletes
// https://codeforces.com/problemset/problem/2060/C

/**
* n integers (even).
* o integer.
* score integer (s) initial value 0.
* n/2 turns.
* Following events happen in each turn sequentially:
* 1. One integer gets erased (a)
* 2. Another integer gets erased (b)
* 3. if (a + b == o) { s++ }
* Player a wants to minimize the score and player b wants to maximize the score.
* Both players use optimal strategies, what is the final score?
*/

#include <iostream>
#include <vector>
#include <unordered_map>

void solve(){
    int t; std::cin>>t;
    int solutions[t];
    // while (t--) { // as 0 is False
    for (int h = 0; h < t; h++) {
        int n, k; std::cin>>n>>k;

        std::vector<int> x(n);
        std::unordered_map<int, int> freq;

        // Introduce de data in the vector and the frequency of each number in the map
        for (int i = 0; i < n; i++) {
            std::cin>>x[i];
            freq[x[i]]++;
        }

        int score = 0;

        for(const auto& [num, count] : freq){
            int complement = k - num;
            if (complement == num) {
                // Pair of the same number (only pairs can contribute)
                score += freq[num] / 2;
            }
            else if (freq.count(complement)) {
                 // Pair num and complement
                 int pairs = std::min(freq[num], freq[complement]);
                 score += pairs;
                 freq[num] -= pairs;
                 freq[complement] -= pairs;
            }
        }
        solutions[h] = score;
    }
    for (const int s : solutions) {
        std::cout << s << "\n";
    }
}

int main(){
    solve();
}