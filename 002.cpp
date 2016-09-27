//
// Created by Deepak Ahuja on 19/09/16.
//
//Even Fibonacci numbers.

#include <iostream>

using namespace std;

int fibonacci(int n){

    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fibonacci(n-1)+fibonacci(n-2));

}

//good method
//while (x <= 4000000) {
//if (x % 2 == 0)
//sum += x;
//int z = x + y;
//x = y;
//y = z;
//}

int main(){


    int sum=0;
    int i=fibonacci(1);

        while(fibonacci(i)<4000000) {
            if (fibonacci(i) % 2 == 0) {
                sum += fibonacci(i);

            }
            i++;
        }

    cout<<sum;
    return 0;
}

