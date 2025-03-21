//
// Created by Duarte on 18/02/2025.
//
// Kevin and Permutation
// https://codeforces.com/problemset/problem/2048/B

/*
* CONTEXT:
* - A permutation of length n is an array consisting of n distinct integers from 1 to n in arbitrary order.
* - An array a is a subarray of an array b if a can be obtained from b by the deletion of several (possibly, zero or all)
* elements from the beginning and several (possibly, zero or all) elements from the end.
* Two subarrays are considered different if the sets of positions of the deleted elements are different.
*
* PROBLEM:
* Two integers n, k
* Permutation p of length n
* Minimize the sum of the minimum values of all subarrays of length k
*/

#include <iostream>
#include <unordered_map>

int main(){
    int t = 0; std::cin>>t; // Input test cases
    std::string solutions[t]; // Array of solution vectors
    for (int i = 0; i < t; i++) {
        int n, k; std::cin>>n>>k; // Input n (permutation) and k (size of subarray)

        int possibleNumbers = 1;
        std::unordered_map<int, int> result;

        int j = k-1, h = n-k;
        while (j < n && h >= 0) {
            if (!result[j]) result[j] = possibleNumbers++;
            if (j!=h) if (!result[h]) result[h] = possibleNumbers++;
            j+=k; h-=k;
        }

        for (int j = 0; j < n; j++) {
            if (!result[j]) {
                result[j] = possibleNumbers++;
            }
            solutions[i] += std::to_string(result[j]) + " ";
        }
    }

    // Print result
    for (std::string s : solutions) {
        std::cout << s << " ";
        std::cout<<'\n';
    }
}
