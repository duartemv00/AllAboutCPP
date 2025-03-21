
#include "../Exercises.h"
#include <iostream>

/**
* Vanya and Fence
*
* time limit per test1 second
* memory limit per test256 megabytes
*
* A line of n people of height h1, h2, ..., hn < fence height.
* Bended person can pass without being noticed.
* Width of unbended person is 1, width of bended person is 2.
*
* Neccessary width of the road?
*/

void Exercise::VanyaAndFence()
{
    int RoadWidth = 0;
    int FenceHeight, PeopleNumber;
    std::cin >> FenceHeight;
    std::cin >> PeopleNumber;

    int PeopleHeights[1000];
    
    for (int i = 0; i < PeopleNumber; i++)
    {
        std::cin >> PeopleHeights[i];
    }

    for (int Heigths : PeopleHeights) {
        Heigths < FenceHeight ? RoadWidth++ : RoadWidth += 2;
    }
    std::cout << RoadWidth << std::endl;
}
