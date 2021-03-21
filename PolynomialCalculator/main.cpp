/*
 * polynomial calculator
 * by Austin Wu
 * version 1.0 start 8/30/2020 end
 *
 */
#include <iostream>
#include "string"
#include "src/parser.h"

using std::string;

void calculatePolynomial(){
    string input = " ";
    string testCase = "430985349058345904++34895435+---+4353453434534534xxxx+423234--";
    do {
        //TODO add error busoutput line
        //input
            std::cout << "Polynomial Calculator, type in any polynomal: " << std::endl;
            getline(std::cin, input);//gets input
            input = testCase;
        //parsing and checking
            parser Parser(input);//constructor and parsing data
            if (Parser.breakFlag == true) {//checking if string is valid before recieving answer
                continue;//basically a beak
            }
            Parser.parseData();//parses the data
        //manipulator
            //TODO: add manipulator that combines all common terms
        //solver
            //TODO: add solver that solves the equasion
        //verifye
            //TODO: add veryfier that verifyes taht equasion is good
    }while (input != "exit");
}
int main() {
        calculatePolynomial();
    return 0;
}
