#include <iostream>
#include "verbStructTest.h"

int main() {
    testCheckContentRus();
    std::cout<< "test testCheckContentRus OK!\n";
    testCheckContentEngOne();
    std::cout<< "test testCheckContentEngOne OK!\n";
    testCheckContentEngTho();
    std::cout<< "test testCheckContentEngTho OK!\n";
    testCheckContentEngThree();
    std::cout<< "test testCheckContentEngThree OK!\n";
    return 0;
}