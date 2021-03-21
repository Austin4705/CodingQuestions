//
// Created by austi on 8/30/2020.
//
#include <string>
#include "checker.h"
#include "mathblock.h"
using std::string;
#ifndef POLYNOMIALCALCULATOR_PARSER_H
#define POLYNOMIALCALCULATOR_PARSER_H

class parser {//parses the string into an dynamic array
private://variables
    string userInput = "";//the users string
    //std::vector<math>;


public://variables
    std::vector<mathblock> *blocks = new std::vector<mathblock>;
    bool breakFlag;
private://methods
    void checkUserInputRudimentary(string input, bool& flagBreak);//calls checker.h and checks if the string is somewhat valid
    void blockParser(string input);
    void cleanParse();//cleans up blocks with only signs, adds signs to blocks with none
    void signParse();//converts signs to bool
    void dataParse();//creates more easily processed parts of data, for every block find length (array style), and combined version
    void checkData();
public:
    parser(string input);
    ~parser();
    void parseData();
    std::vector<mathblock>& getBlock();
};


#endif //POLYNOMIALCALCULATOR_PARSER_H


