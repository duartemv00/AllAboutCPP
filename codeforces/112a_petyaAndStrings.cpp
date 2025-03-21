//
// Created by Duarte on 20/01/2025.

// Problem: Petya and Strings
// https://codeforces.com/problemset/problem/112/A

/*
* 2 strings (same size from 1 to 100) consisting of uppercase and lowercase latin letters.
* Compare them lexicographically. Case insensitive.
* FirstString < SecondString: -1
* FirstString = SecondString: 0
* FirstString > SecondString: 1
*/

#include <iostream>

/**
* Compare strings in order to determine which one is lexicographically smaller.
*/
int CompareStrings(std::string first, std::string second, int n){
    if(tolower(first[n]) < tolower(second[n])){
        return -1; // At least one character of the first is "smaller" lexicographically
    } else if (tolower(first[n]) > tolower(second[n])){
        return 1; // At least one character of the first is "bigger" lexicographically
    } else if (n < first.size()){ // Current characters are equal but not all characters have been compared, continue
        return CompareStrings(first, second, n+1);
    } else {
        return 0; // After comparing all characters, all are equal
    }
}

int main(){
    std::string firstString, secondString;
    std::cin>>firstString>>secondString;

    std::cout<<CompareStrings(firstString, secondString, 0);
}