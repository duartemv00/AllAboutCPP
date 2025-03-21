
// Created by Duarte on 21/01/2025.

// Elephant
// codeforces.com/problemset/problem/617/A

/*
* House 1: 0
* House 2: x. x>0;
* 1 step: 1,2,3,4 or 5 units forward.
* Minimum number of steps
*/

#include <iostream>

// Recursive function to reduce the distance
int stepReducer(int distance, int stepSize, int& stepCount) {
    while (distance >= stepSize) {
        distance -= stepSize;
        stepCount++;
    }
    if (distance > 0 && stepSize > 1) {
        return stepReducer(distance, stepSize-1, stepCount);
    }
    return stepCount;
}

int main(){
    int x; std::cin >> x; // Distance

    // Solving passing by reference
    int s = 0;
    stepReducer(x, 5, s);
    std::cout << s;

    // Solving saving a variable
    // std::cout << stepReducer(x, 5, 0);

    // Solving without recursion
    /* while (x>0) {
        if(x>=5){ x-= 5; solution++; }
        else if (x>=4){ x-= 4; solution++; }
        else if (x>=3){ x-= 3; solution++; }
        else if (x>=2){ x-= 2; solution++; }
        else if (x>=1){ x-= 1; solution++; }
    }
    std::cout << solution; */
}
