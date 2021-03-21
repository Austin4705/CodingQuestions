#include <iostream>
#include <vector>
#include <atomic>
#include <thread>
#include <chrono>
#include <mutex>
#include <time.h>
#include <functional>


using namespace std;

bool endProgram = false;

void nonConcurrent(int x, std::vector<int>* data){
    for (int i = 0; i < x; i++){
        data->push_back(i);
    }
}

bool checkForPrime(int n){
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

void lookForThreads(int increment, int startOffset){
    uint64_t checkVal;
    checkVal = startOffset;
    while(!endProgram) {
        if(checkForPrime(checkVal)){
            string output = std::to_string(checkVal);
            std::cout << checkVal << "\n";
        }
        checkVal += increment;
    }
}

int main() {
    clock_t t1, t2;
    t1 = clock();

    int maxThreads = 20;
    int activeThreads = 0;

    std::thread threads[maxThreads];

    for (; activeThreads < maxThreads; activeThreads++) {
        std::thread activeThread(lookForThreads, maxThreads, activeThreads);
        threads[activeThreads] = static_cast<thread &&>(activeThread);
    }

    int input;
    cin >> input;

    for (; activeThreads < maxThreads; activeThreads++) {
        threads[activeThreads].join();
    }
    return 0;
}

//    uint64_t numConcurrent = 0;
//    uint32_t checkedNum = 0;
//    while(numConcurrent < 10000000){
//        if(checkForPrime(numConcurrent)){
//            checkedNum++;
//            t2=clock();
//            float diff ((float)t2-(float)t1);
//
//            std::cout << numConcurrent << "            "  << (diff/1000) <<"\n";
//        }
//        numConcurrent++;
//
//    }


//    bool x = true;
//    bool * ptr = &x;
//    while (*ptr){
//        int threadAt = activeThreads;
//        for(; threadAt < maxThreads; threadAt++){
//            if(status[threadAt] == true){
//                std::thread t1(lookForThreads, &status[activeThreads], min, marker);
//                threads[threadAt] = std::thread(lookForThreads, &status[activeThreads], min, marker);
//                int min = marker - threadCalcRange;
//            }
//
//        }
//  }
//    return 0;
//}

