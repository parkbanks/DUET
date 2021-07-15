#include "utilities.h"
#include <iostream>
#include <cmath>

// Function definition
std::vector<float> hamming(int windowLength) {
    std::vector<float> filter(windowLength);
    for(int i = 0; i<windowLength; i++) {
        filter[i] = 0.54 - 0.46 * cos(2 * M_PI * i / (windowLength - 1));
    }
    return filter;
}