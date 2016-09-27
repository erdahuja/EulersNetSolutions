//
// Created by Deepak Ahuja on 19/09/16.
//
//Largest Prime factor
#include <iostream>

using namespace std;

int main(){

long n=600851475143;
    int i=2;
    while(n>1)
    {
        if(n%i == 0)
        {
            n=n/i;
        }
        else
            i++;
    }

    cout<<i;
    return 0;
}