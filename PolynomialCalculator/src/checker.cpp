//
// Created by austi on 8/30/2020.
//
#include <string>
#include "checker.h"
#include <vector>
using std::string;


bool checker::rudimentaryCheck(string input) {//checks if all characters in the string are valid, invalid char are put into a dynamic array to be shown to the user
    bool badCharFlag = false;
    for (char c: input) {
        switch (c) {
            case ' ':
            case '0' ... '9':
            case '+':
            case '-':
            //case '/':
            case '^':
            case '*':
            //case '%':
            case 'x':
                break;

            default:
                badCharFlag = true;
                flagChar.push_back(c);
                break;
        }


    }
    if (badCharFlag == 1) {
        return true;
    }
    else{
        return false;
    }

}