#include <iostream>
#include <vector>
#include <string>
#include <bits.h>
#include <math.h>
#include <fstream>

using std::istringstream;
using std::string;
using std::vector;

class shape{
protected:
    float area;
};

class rectangle : shape{
public:
    rectangle(float _width, float _height){
        width = _width;
        height = _height;
    }
    float getArea(){
        return area;
    }
    float width;
    float height;
    void calculateArea(){
        area = width * height;
    }
};

class square : shape{
public:
    square(float _width){
        width = _width;
    }
    float getArea(){
        return area;
    }
    float width;
    void calculateArea(){
        area = width * width;
    }
};

class circle : shape{
public:
    circle(float _diameter){
        diameter = _diameter;
    }
    float getArea(){
        return area;
    }
    float diameter;
    void calculateArea(){
        area = M_PI * (diameter / 2) * (diameter / 2);
    }
};

class triangle : shape{
public:
    triangle(float _base, float _height){
        base = _base;
        height = _height;
    }
    float getArea(){
        return area;
    }
    float base = 0;
    float height = 0;
    void calculateArea(){
        area = .5 * base * height;
    }
};

class parse{
    private:vector<rectangle> rectArr;
    private:vector<square> sqArr;
    private:vector<circle> circArr;
    private:vector<triangle> triArr;

public:
    parse(vector<string> & strArr){
        sort(strArr);
        this->calculateArea();
        output();
    }

private:
    void calculateArea(){
        for(int i = 0; i < rectArr.size(); i++){
            rectArr[i].calculateArea();
        }
        for(int i = 0; i < sqArr.size(); i++){
            sqArr[i].calculateArea();
        }
        for(int i = 0; i < circArr.size(); i++){
            circArr[i].calculateArea();
        }
        for(int i = 0; i < triArr.size(); i++){
            triArr[i].calculateArea();
        }
    }

    void output(){
        for(auto x : rectArr){
            std::cout << "rectangle " << x.getArea() << "\n";
        }
        for(auto x : sqArr){
            std::cout << "square " << x.getArea() << "\n";
        }
        for(auto x : circArr){
            std::cout << "circle " << x.getArea() << "\n";
        }
        for(auto x : triArr){
            std::cout << "triangle " << x.getArea() << "\n";
        }
    }

    void sort(std::vector<string> & strArr){
        for(int i = 0; i < strArr.size(); i++){
            float val1, val2;
            parseVal(strArr[i], val1, val2);
            switch(strArr[i][0]) {
                case 'r':
                case 'R':
                    rectArr.push_back(*new rectangle(val1, val2));
                    break;
                case 's':
                case 'S':
                    sqArr.push_back(*new square(val1));
                    break;
                case 'c':
                case 'C':
                    circArr.push_back(*new circle(val1));
                    break;
                case 't':
                case 'T':
                    triArr.push_back(*new triangle(val1, val2));
                    break;
                default:
                    break;
            }
        }
    }

    void parseVal(string str, float& val1, float& val2){
        string word = "";
        uint16_t type = 0;
        string val1Str = "";
        string val2Str = "";
        for (auto x : str)
        {
            if (x == ' ')
            {
                if(type == 1) {
                    val1Str = word;
                }
                word = "";
                type++;
            }
            else {
                word = word + x;
            }
        }
        if(type == 3){
            val2Str = word;
        }
        else{
            val1Str = word;
        }
        val1 = std::stof(val1Str);
        if(val2Str != ""){
            val2 = std::stoi(val2Str);
        }
    }
};
