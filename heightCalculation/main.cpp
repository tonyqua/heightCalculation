#include <iostream>
#include "constants.h"

//using namespace myConstants;

//double getInitialHeight() {
//    std::cout << "Enter the initial height of the tower in meters: ";
//    double initialHeight;
//    std::cin >> initialHeight;
//    return initialHeight;
//}

double calculateHeight(double initialHeight, int seconds) {
    double distanceFallen = (myConstants::my_gravity * seconds * seconds) / 2;
    double currentHeight = initialHeight - distanceFallen;
    return currentHeight > 0 ? currentHeight : 0;
}

void printHeight(double height, int seconds) {
    /*
    if (height > 0.0) {
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
    }
    else {
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
    }
    */
    height > 0.0 ? std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n" : std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

int main() {
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    std::cin >> initialHeight;

    for (int seconds = 0; seconds <= 5; ++seconds) {
        double height = calculateHeight(initialHeight, seconds);
        printHeight(height, seconds);
    }

    return 0;
}
