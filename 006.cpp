//
// Created by Deepak Ahuja on 20/09/16.
//

//Sum square difference

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int sumofsquares=0;
    int squaresofsum=0;
    for(int i=1;i<=100;i++) {
        sumofsquares = sumofsquares + i * i;
        squaresofsum += i;

    }
    cout<<abs(sumofsquares-squaresofsum*squaresofsum);
    return 0;
}