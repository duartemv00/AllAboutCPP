
// Created by Duarte on 31/01/2025.

// Gorilla and the Exam
// https://codeforces.com/problemset/problem/2057/B

/**
* Array a of length n. Int k.
* function f(a) --> Smallest number of opertations required to make the array b empty:
*       - Take 2 int l,r (l <= r), let x be the minimum element in the subarray b[l,r]
*       - Remove the x value from the array (Remove all such bi that l<=i<=r and bi = x from the array )
* No more than k operations.
*/

#include <algorithm>
#include <iostream>
#include <queue>
#include <unordered_map>

std::unordered_map<int, int> ElementCounting(int a[], int n) {
    std::unordered_map<int, int> elementCount;

    /*for (int j = 0; j < n; j++) {
            if (elementCount.find(a[j])== nullptr) { // If the element is NOT already in the map
                //elementCount.insert({a[k], 0}); // I was inserting the number of operations, so sometimes it was an existing number
                for (int l = 0; l < n; l++) {
                    if (a[l] == a[j]) {
                        elementCount[a[j]]++; // If you do this it automatically creates the element in the map
                    }
                }
            }
        }*/

    for (int j = 0; j < n; j++) {
        elementCount[a[j]]++; // Update the element count
    }

    return elementCount;
}

int FindTheFamousElement(std::unordered_map<int, int> elementCount) {
    // Find the element that appears the most amount of times
    /*int famousElement = 0; //mostTimes = 0, ;
    for (auto element : elementCount) {
        if (val > mostTimes) {
            mostTimes = val;
            famousElement = key;
        }
    }*/
    const int famousElement =
            std::max_element(elementCount.begin(), elementCount.end(),
                [](const auto& a, const auto& b) {return a.second < b.second;})->first;
    return famousElement;
}

int ReduceArray(int a[], int n) {
    int NumOperations = 0; // Number of operations needed to reduce the array
    while (n > 0) {
        int minElement = *std::min_element(a, a + n);
        const int* newEnd = std::remove(a, a + n, minElement);
        n = newEnd - a; // Update the size of the array
        NumOperations++;
    }
    return NumOperations;
}

int main(){

    int t; std::cin>>t; // Number of test cases
    int solutions[t];
    int n, k; // Length of the array and the number of operations
    for (int i=0; i<t; i++) {
        std::cin>>n>>k; // INPUT length of the array and the number of operations
        int a[n]; // Array
        for (int j = 0; j < n; j++) {
            std::cin>>a[j]; // INPUT array
        }

        // Find number of TIMES EACH ELEMENT APPEARS
        std::unordered_map<int, int> elementCount = ElementCounting(a,n);

        // Find the ELEMENT THAT APPEARS THE MOST AMOUNT OF TIMES
        int famousElement = FindTheFamousElement(elementCount);


        // Perform changes to the array
        int lessTimes = 999, unpopularIndex = 0;
        for (int j = 0; j < k; j++) {
            lessTimes = 999; // Reset the value
            // Find the element that appears the least amount of times (but more than 0)
            for (int w = 0; w < n; w++) {
                if (elementCount[a[w]] < lessTimes && elementCount[a[w]] > 0 && a[w] != famousElement) {
                    lessTimes = elementCount[a[w]];
                    unpopularIndex = w;
                }
            }
            // Replace one unit of the unpopularElement with the famousElement value
            elementCount[a[unpopularIndex]]--; // Update the element count
            a[unpopularIndex] = famousElement;
        }

        // Use a priority queue to keep track of the least frequent elements
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> minHeap;
        /*for (const auto& element : elementCount) {
            if (element.first != famousElement) {
                minHeap.push({element.second, element.first});
            }
        }

        // Perform changes to the array
        for (int j = 0; j < k && !minHeap.empty(); j++) {
            auto [count, unpopularElement] = minHeap.top();
            minHeap.pop();

            // Find the index of the unpopular element
            for (int w = 0; w < n; w++) {
                if (a[w] == unpopularElement) {
                    elementCount[a[w]]--; // Update the element count
                    a[w] = famousElement;
                    break;
                }
            }
        }*/

        // Reduce the array until it is empty and return the number of operations needed
        solutions[i] = ReduceArray(a,n); // Store the solution
    }

    for (int solution : solutions) {
        std::cout<<solution<<std::endl; // OUTPUT solution;
    }
}
