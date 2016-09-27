//
// Created by Deepak Ahuja on 27/09/16.
//

//007 10001st prime number


#include <iostream>

using namespace std;

bool isPrime(int num){

    bool isprime=true;

    for(int i=2;i<=num/2;i++){

        if(num%i==0){
            isprime=false;
            break;
        }

    }


    return isprime;

}

int main(){


    int count=0;
    int i=2;
    while(1){

        if(isPrime(i)){
            count++;
        }

        if(count==10001)
        {
            cout<<i;
            break;
        }
        i++  ;
    }



    return 0;
}