//
//  main.cpp
//  January 27
//
//  Created by vlad on 27.01.2019.
//  Copyright © 2019 vlad. All rights reserved.
//

#include "Class/RandomNumber.hpp"
using namespace std;



std::map<int, int> RandomNumber::statistic{};



int main(int argc, const char * argv[]) {
    const int MAX = 10000;


    RandomNumber::randomize();


    for(size_t index = 0;index<MAX;++index) RandomNumber::getUniform();
    RandomNumber::printStatistic();

    RandomNumber::resetStaticstic();
    for(size_t index = 0;index<MAX;++index) RandomNumber::getGauss();
    RandomNumber::printStatistic();

    RandomNumber::resetStaticstic();
    for(size_t index = 0;index<MAX;++index) RandomNumber::getExponential();
    RandomNumber::printStatistic();

    return 0;
}
