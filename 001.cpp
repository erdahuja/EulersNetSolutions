//
// Created by Deepak Ahuja on 19/09/16.
//
//Multiples of 3 and 5.

#include <iostream>

using namespace std;

int main(){

int sum=0;

    for(int i=1;i<1000;i++){

        if(i%3==0||i%5==0){

            sum+=i;
        }

    }
    cout<<sum;
    return 0;
}