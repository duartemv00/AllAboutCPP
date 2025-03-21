
// Created by Duarte on 20/01/2025.
// https://codeforces.com/problemset/problem/231/A

/**
* Implement a problem if m>=2 members are sure
* There are n problems (n<=n<=1000)
* Each problem has 3 statements (one for each member) (0 or 1): 1 if the member is sure, 0 if not
* NOTE: statements are separated by a space
*/

#include <iostream>
#include <string>
#include <conio.h>

int main( int argc, char* argv[] ){
    int numOfProblems; // number of problems
    std::cin >> numOfProblems;

    int answeredProblems = 0;
    int statements[3];

    for(int t = 0; t < numOfProblems; t++){
        for (int i = 0; i < 3; i++){
            std::cin >> statements[i];
        }
        if(statements[0] + statements[1] + statements[2] >= 2){
            answeredProblems++;
        }
    }

    std::cout<<answeredProblems;
    getch();
}