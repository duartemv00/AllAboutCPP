
// Created by Duarte on 21/01/2025.

// Boy or Girl
// https://codeforces.com/problemset/problem/236/A

/*
* Odd strings are man and even strings are girls.

* */
#include <iostream>
#include <vector>

int main(){
      std::string name;
      std::cin >> name;

      std::vector<char> uniqueName;
      for (int i=0; i<name.length(); i++) {
            bool flag = true;
            for (char j : uniqueName) {
                  if (name[i] == j) {
                        flag = false;
                  }
            }
            if (flag) { uniqueName.push_back(name[i]); }
      }

      if(uniqueName.size() % 2 == 0){
            std::cout << "CHAT WITH HER!";
      } else {
            std::cout << "IGNORE HIM!";
      }
}

// If we wanted to know the number of times each letter is repeated we could use a map
// #include <unordered_map>
// std::unordered_map<char, int> letterCount;
