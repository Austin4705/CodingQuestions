#include <iostream>
#include <vector>
#include <string>
#include <bits.h>
#include <math.h>
#include <fstream>

using std::istringstream;
using std::string;
using std::vector;


class parse2{
public:
    parse2(std::vector<string> & inputLines){
        std::vector<string> parsed;
        string word = "";
        for(auto x : inputLines){
            string word = "";
            for (auto y : x)
            {
                if (y == ' ')
                {
                    parsed.push_back(word);
                    word = "";
                }
                else {
                    word = word + y;
                }
            }
            parsed.push_back(word);
        }
        for(auto x : parsed){
            input(x);
        }
    }
private:
    enum state{
        wordR = 0,
        wordS = 1,
        wordC = 2,
        wordT = 3,
        var1 = 4,
        var2 = 5
    };

    void input(string str){
        static state State;
        static state prevState;
        static float var1Temp;
        static string outputStr = "";

        switch (str[0]){
            case 'r':
            case 'R':
                State = wordR;
                break;
            case 's':
            case 'S':
                State = wordS;
                break;
            case 'c':
            case 'C':
                State = wordC;
                break;
            case 't':
            case 'T':
                State = wordT;
                break;
            default:
                if(prevState == var1)
                    State = var2;
                else
                    State = var1;
                break;
        }

        switch (State){
            case wordR:
                outputStr += "rectangle";
                break;
            case wordS:
                outputStr += "square";
                break;
            case wordC:
                outputStr += "circle";
                break;
            case wordT:
                outputStr += "triangle";
                break;
            case var1:
                if(outputStr[0] == 'c'){
                    float ans = M_PI * (std::stof(str)/2.0) * (std::stof(str)/2.0);
                    outputStr = outputStr + " " + std::to_string(ans) + "\n";
                    std::cout << outputStr;
                    outputStr = "";
                }
                if(outputStr[0] == 's'){
                    float ans = std::stof(str) * std::stof(str);
                    outputStr = outputStr + " " + std::to_string(ans) + "\n";
                    std::cout << outputStr;
                    outputStr = "";
                }
                if(outputStr[0] == 'r' || outputStr[0] == 't')
                    var1Temp = std::stof(str);
                break;

            case var2:
                if(outputStr[0] == 'r'){
                    float ans = std::stof(str) * var1Temp;
                    outputStr = outputStr + " " + std::to_string(ans) + "\n";
                    std::cout << outputStr;
                    outputStr = "";
                }
                if(outputStr[0] == 't'){
                    float ans = .5 * var1Temp * std::stof(str);
                    outputStr = outputStr + " " + std::to_string(ans) + "\n";
                    std::cout << outputStr;
                    outputStr = "";
                }
                break;
        }
        prevState = State;
    }
};
