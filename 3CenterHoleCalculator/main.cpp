/*3 Belt Dia Finder By Austin Wu - Team 13217 Astrobruins
 * I only tested positive numbers and practical numbers, I don't really care about edge cases
 * To those of you wondering, why Austin, why would you create a calculator type simulation script in c++, to that I would say because I can,
 * and because Python bad. To those of you who say why Python bad, Python auto gc, Python bad syntax, Python weakly typed,
 * Python JIT, Python is not know by Austin (probably why its not written in Python), Python bad
 *
 * How to Use:
 * Change the Enum on Line ___ to what you are calculating
 * Go to line ___ and change the numbers to what you want them to be
 *
 * findBeltLength:
 * will claculate the length of belt required
 *
 * This is totally not a virus :)
 */

//standard lib imports
#include <iostream>
#include <math.h>
//make code more readable
typedef const long double constParameter;
typedef long double parameter;
//makes code more understandable and I can pass with single pointer
struct point{
    parameter x = 0;
    parameter y = 0;
};
//I just did it this way because globals are very bad in C++
struct dataParameters{
    enum calculationType{
        findBeltLength, findLength, findLeftWheelMultiple, findRightWheelMultiple, findTopWheel, findLeftWheel, findRightWheel
    } operation = findBeltLength;//change this to edit the type of calculation
    //change these to edit the output of the script
    constParameter topWheelRadius = 45;
    constParameter leftWheelRadius = 45;
    constParameter rightWheelRadius = leftWheelRadius;

    constParameter length = 45.0;
    constParameter bottomLengthLeft = 22.5;
    constParameter bottomLengthRight =  22.5;

    constParameter beltType = 5;
    constParameter beltLength = 180;
    //data used inside the script
    point topWheelPointLeft;
    point topWheelPointRight;
    point leftWheelPointLeft;
    point leftWheelPointRight;
    point rightWheelPointLeft;
    point rightWheelPointRight;
} data;

//function headers
void calculateLeftTangent();
void calculateRightTangent();
parameter distanceBetweenCircles(parameter yOffset, parameter xOffset);
parameter calculateArcEndPoints(parameter degrees, parameter radius, );

//entry point
int main() {
    calculateLeftTangent();
    calculateRightTangent();
}
void calculateLeftTangent(){
    parameter hyp = distanceBetweenCircles(data.length, data.bottomLengthLeft);
    parameter adj = abs(data.topWheelRadius - data.leftWheelRadius);
    parameter theta = acosl(adj / hyp);

}
void calculateRightTangent(){

}
parameter distanceBetweenCircles(parameter yOffset, parameter xOffset){
    return sqrtl(powl(xOffset) + powl(yOffset));
}
parameter calculateArc(parameter degrees, parameter diameter){

    return 0;
}