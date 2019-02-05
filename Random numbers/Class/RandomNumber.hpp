//
//  RandomNumber.hpp
//  January 27
//
//  Created by vlad on 05.02.2019.
//  Copyright © 2019 vlad. All rights reserved.
//

#ifndef RandomNumber_hpp
#define RandomNumber_hpp

#include <stdio.h>
#include <iostream>
#include <random>
#include <map>
#include <optional>
#include <functional>
#include <condition_variable>
#include <future>

class RandomNumber{
private:
    using pair = std::pair<int, int>;
    RandomNumber() = delete;
    static std::map<int, int> statistic;
    static const int a = 0;
    static const int b = 1;
public:
    
    static auto& getEngine();
    static void randomize();
    
    
    static int getUniform();
    static int getGauss();
    static int getExponential();
    
    
    static void printStatistic();
    
    static void resetStaticstic();
    
};



#endif /* RandomNumber_hpp */
