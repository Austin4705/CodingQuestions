#include <iostream>
#include <vector>
#include <string>
#include <bits.h>
#include <math.h>
#include <fstream>
#include <sstream>
#include "test1.h"
#include "test2.h"

using std::istringstream;
using std::string;
using std::vector;

int main() {
    std::ifstream file;
    file.open("X:\\Repositorys\\Tests\\CodingQuestions\\AreaInputProblem\\shapes.txt");
    if(file.is_open()){
        std::cout << "File Open ";
    }
    std::cout << "Shapes: \n";
    vector<string> inputLines;
    string line;
    while( std::getline( file, line)) // for each line read from the file
    {
        if(line != "")
        inputLines.push_back(line);
    }

    parse Parser = *new parse(inputLines);

    std::cout << "\n";

    parse2 Parser2 = *new parse2(inputLines);




    std::cin.get();
    return 0;
}