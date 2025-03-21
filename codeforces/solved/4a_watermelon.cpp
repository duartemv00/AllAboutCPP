
// Created by Duarte on 20/01/2025.

// Watermelon
// https://codeforces.com/problemset/problem/4/A

/*
* Divide a watermelon in 2 parts
* w is the weight of the watermelon (1<=w<=100)
* Each part weigh an even number of kilos (but not necessarily the same weight)
*/

#include <iostream>

int main(){
    int weigth = 0;
    std::cin >> weigth;

    const int halfWeight = weigth/2;

    // Both halves even or both halves odd are the valid options because 2 odd numbers can be modified to become 2 even numbers
    // half <1 is not valid because it is odd and can't move weight from one part to the other
    if(halfWeight > 1
        && ((halfWeight%2 == 0 && (weigth-halfWeight)%2 == 0) || (halfWeight%2 != 0 && (weigth-halfWeight)%2 != 0))){
      std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}