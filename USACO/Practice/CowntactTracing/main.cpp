//http://www.usaco.org/index.php?page=viewproblem2&cpid=1037

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


struct interaction{
    int t, x, y;
};

int main() {
    ifstream cin("tracing.in");
    ofstream cout("tracing.out");

    int n, t;
    string inArr;
    cin >> n;
    cin >> t;
    cin >> inArr;
    vector<bool> inputArr = {0};
    for(int i = 0; i < inArr.length(); ++i){
        if(inArr[i] == '1'){
            inputArr.push_back(1);
        }
        else{
            inputArr.push_back(0);
        }
    }
    vector<interaction> interactionArr;

    //parse

    sort(interactionArr.begin(),
              interactionArr.end(),
              [](const interaction& lhs, const interaction& rhs)
              {
                  return lhs.t < rhs.t;
              });
    for(int i = 0; i < inArr.length(); ++i){
        if(inArr[i] == 1){
            
        }
    }


}
