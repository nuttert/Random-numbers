//
//  RandomNumber.cpp
//  January 27
//
//  Created by vlad on 05.02.2019.
//  Copyright © 2019 vlad. All rights reserved.
//

#include "RandomNumber.hpp"

auto&RandomNumber::getEngine(){
    static std::default_random_engine pseudorandomNumbers{};
    return pseudorandomNumbers;
}

void RandomNumber::randomize(){
    static std::random_device absoluteRandomNumber{};
    getEngine().seed(absoluteRandomNumber());
    }



int RandomNumber::getUniform(){
    std::uniform_int_distribution<> distribution{a,b};
    auto randomNumber = distribution(getEngine());
    ++statistic[randomNumber];
    return randomNumber;
}


int RandomNumber::getGauss(){
    static std::normal_distribution<> distribution{0,1};
    auto randomNumber = distribution(getEngine());
    ++statistic[randomNumber];
    return randomNumber;
    }
    
int RandomNumber::getExponential(){
    static std::exponential_distribution<> distribution{1.5};
    auto randomNumber = distribution(getEngine());
    ++statistic[randomNumber];
    return randomNumber;
}
    

void RandomNumber::printStatistic(){
    std::cout << "__________________"<<std::endl;
    for(const auto& element:statistic)
        std::cout << "["<< element.first << "] "
        <<element.second<<std::endl;
    std::cout << "__________________"<<std::endl;
}


void RandomNumber::resetStaticstic(){
    statistic.clear();
}

