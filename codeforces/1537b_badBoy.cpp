//
// Created by Duarte on 20/01/2025.
//
// Bad Boy
// https://codeforces.com/problemset/problem/1537/B

/*
* Room of n x m. Anton is in position i,j
* Throw 2 yoyos in cells of the room (can be the same cell)
* Anton has to pick up both and return to the initial position only using adjacent cells.
* Find the max number of cells that Anton could visit.
*/

#include <iostream>

int main(){
  int t = 0; // Number of test cases
  std::cin >> t;

  int n = 0, m = 0, i = 0, j = 0; // Room dimensions and Anton's position
  int x1 = 1, y1 = 1, x2 = n, y2 = m; // Yoyos positions

  for (int k=0; k<t; k++){
    std::cin>>n>>m>>i>>j; // Input room size and Anton's position

    // First Position
    // Rows
    if(abs(n-i) > abs(1-i)){ x1 = n; }
    else { x1 = 1; }
    // Columns
    if(abs(m-j) > abs(1-j)){ y1 = m; }
    else { y1 = 1; }

    // Second Position
    x1 == 1 ? x2 = n : x2 = 1;
    y1 == 1 ? y2 = m : y2 = 1;

    std::cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<'\n';
  }
}

// Maximum distance in a regular 2D matrix is always: 2(m-1) + 2(n-1)