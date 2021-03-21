//
// Created by austi on 8/30/2020.
//

#include "parser.h"
#include "checker.h"
#include <iostream>
#include <vector>
#include <math.h>

parser::parser(string input) {//puts input into a private var and calls checking of string
    userInput = input;
    breakFlag = false;
    checkUserInputRudimentary(userInput, breakFlag);
}
void parser::parseData(){
    blockParser(userInput);//parses everything
    cleanParse();
    signParse();
    dataParse();//after this all done parsed
    checkData();//checksblocks
}
void parser::checkData() {
    //TODO add checking to make sure blocks are valid
}
std::vector<mathblock>& parser::getBlock(){
    return *blocks;
}
parser::~parser() {
    delete (blocks);
}

void parser::checkUserInputRudimentary(string input, bool &flagBreak) {//calls check class functions
    checker Checker;
    flagBreak = false;
    if (userInput == "exit") {
        return;
    }
    if (Checker.rudimentaryCheck(userInput) == true) {//checks if all characters are valid
        std::cout << "Inproper Characters: \n";
        for (char output : Checker.flagChar) {
            std::cout << output << std::endl;
        }
        std::cout << "Please Retype\n";
        flagBreak = true;
        return;
    }
//    if (Checker.logicalCheck(userInput) == true) {
//        std::cout << "Logical Errors: \n";
//        for (string output : Checker.logicalErrorMessages) {
//            std::cout << output << std::endl;
//        }
//        std::cout << "Please Retype\n";
//        flagBreak = true;
//        return;
//    }
}


void parser::blockParser(string input) {//parses the code into chunks from the signs
    for (int location = 0; location < input.length(); location++) {
        //if (input[location] == 0 || (input[location] == '-' || input[location] == '+')/*- &&(input[static_cast<unsigned >(location-1)] != '-' || input[static_cast<unsigned >(location-1)]!= '+')*/ ) {//check for the start of a new block
        this->blocks->push_back(mathblock());//declare a new block
        blocks->back().signStart = location;//document the starting location of the block
        for (; (input[location] == '+' || input[location] == '-') &&
               location < input.length(); location++) {//goes through and adds up all the signs next to eachother
            blocks->back().signBlock += input[location];
        }
        blocks->back().blockStart = location; // filtered through all signs so blocks have to start now
        for (; !(input[location] == '-' || input[location] == '+') &&
               (location != input.length()); location++) {//if not + or - then add to string
            blocks->back().block += input[location];
        }
        //make the back of block
        if (input.length() == location) {
            blocks->back().blockEnd = location;
        } else {
            location--;
            blocks->back().blockEnd = (location);

        }
        //}
    }
}

void parser::cleanParse() {
    for (int j = 0; j < blocks->size(); ++j) {//if no sign add one
        if (blocks->at(j).signBlock == "") {
            blocks->at(j).signBlock = '+';
        }
    }
    if (blocks->back().block == "") {//erase all blocks with no val, only case that can happen is last one
        blocks->pop_back();
    }
}

void parser::signParse() {
    for (int i = 0; i < blocks->size(); ++i) {//for every block calculate signs
        int numMinus = 0;
        for (int j = 0; j < blocks->at(i).signBlock.length(); ++j) {
            if (blocks->at(i).signBlock[j] == '-') {
                numMinus++;
            }
        }
        if (numMinus % 2 == 1 || numMinus == 1) {//if numMinus is odd
            blocks->at(i).totalSign = 0;
        } else {
            blocks->at(i).totalSign = 1;
        }
    }
}

void parser::dataParse() {
    for (int i = 0; i < blocks->size(); ++i) {//for every block find length (array style), and combined version
        blocks->at(i).blockLegnth = blocks->at(i).block.length();
        if (blocks->at(i).totalSign == 1) {
            blocks->at(i).totalBlock = '+' + blocks->at(i).block;
        }
        if (blocks->at(i).totalSign == 0) {
            blocks->at(i).totalBlock = '-' + blocks->at(i).block;
        }
        blocks->at(i).totalBlockLegnth = blocks->at(i).totalBlock.length();
    }
}