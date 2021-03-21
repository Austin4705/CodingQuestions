//
// Created by austi on 8/30/2020.
//filter into blocks from signs
//check each block to make sure that they are valid
//	out put errors if not
//output filtered list
#include <string>
#include <vector>
using std::string;
#ifndef POLYNOMIALCALCULATOR_CHECKER_H
#define POLYNOMIALCALCULATOR_CHECKER_H


class checker {
private:
public:
    std::vector<char> flagChar = {};//all bad characters
    std::vector<string> logicalErrorMessages = {};//error messages from logical check
    bool rudimentaryCheck(string input);//checks if all characters in the string are valid, invalid char are put into a dynamic array to be shown to the user
    //bool blockCheck(std::vector <>);//logically checks if string is valid
};


#endif //POLYNOMIALCALCULATOR_CHECKER_H
