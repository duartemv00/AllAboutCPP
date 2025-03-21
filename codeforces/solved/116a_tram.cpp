
#include "../Exercises.h"
#include <iostream>

/**
 *  Tram
 *  
 *  Time limit: 2s
 *  Memory limit: 256MB
 *
 * Tram line with n stops, numbered 1 to n. 2<=n<=1000.
 * At any i stop, a passengers exit and b passengers enter.
 * Tram is empty before the first stop.
 * Tram becomes empty after the last stop.
 *
 * ¿Trams minimum capacity to satisfy the input?
 */

void Exercise::Tram()
{
    int max = 0; int current = 0;
    
    int StopsNumber; // Number of stops
    std::cout << "Enter number of stops: ";
    std::cin >> StopsNumber;
    while (StopsNumber < 2 || StopsNumber > 1000)
    {
        std::cout << "The number of stops must be between 2 and 1000." << std::endl;
        std::cin >> StopsNumber;
    }
    
    int station[1000];

    for (int i = 1; i <= StopsNumber; i++){
        std::cin >> station[0] >> station[1];
        // Check if the input is correct (a <= current)
        while (station[0] > current)
        {
            std::cout << "The number of passengers exiting the tram must be less than or equal to the current number of passengers." << std::endl;
            std::cin >> station[0] >> station[1];
        }
        std::cout << station[0] << " " << station[1] << std::endl;

        if (i<StopsNumber)
        {
            current = current - station[0] + station[1];
        } else { current = current - station[0]; }
        
        max = std::max(current, max);
    }
    std::cout << "Max capacity: " << max << std::endl;
}


// TODO: Implement a version with this next code
// const char* sep = "";
//     
// for (auto item : v) {
//     std::cout << sep << item;
//     sep = " ";
// }
