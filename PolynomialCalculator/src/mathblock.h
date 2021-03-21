//
// Created by austi on 9/9/2020.
//
#include <vector>
#include <string>
#ifndef POLYNOMIALCALCULATOR_MATHBLOCK_H
#define POLYNOMIALCALCULATOR_MATHBLOCK_H

class mathblock {//a single math block (ex -2x^3)
public:
        int signStart = 0;
        int blockStart = 0;
        int blockEnd = 0;
        std::string block = "";
        unsigned int blockLegnth = 0;
        std::string signBlock = "";
        std::string totalBlock = "";
        unsigned int totalBlockLegnth = 0;
        bool totalSign = 1;//postitive default at 1

};


#endif //POLYNOMIALCALCULATOR_MATHBLOCK_H
