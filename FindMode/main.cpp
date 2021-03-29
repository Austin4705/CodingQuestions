#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int numberElements;
    std::cin >> numberElements;

    std::vector<int> elements(numberElements);
    for(int i = 0; i < numberElements; ++i){
        int value;
        cin >> value;
        elements[i] = value;
    }

    int mode;
    std::sort(elements.begin(), elements.end());

    int maxCount = 0, maxNum, currentCount = 0, prevNum = elements[0];
    for(int i = 0; i < numberElements; ++i){
        if(elements[i] == prevNum){
            currentCount++;
        }
        else{
            if(currentCount > maxCount){
                maxNum = elements[i];
                maxCount = currentCount;
            }
            currentCount = 0;
        }
        prevNum = elements[i];
    }

    if(currentCount > maxCount){
        maxNum = elements[numberElements-1];
    }
    std::cout << maxNum;

    // Write your code here
    return 0;
}