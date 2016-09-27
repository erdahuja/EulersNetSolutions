//
// Created by Deepak Ahuja on 19/09/16.
//
//Largest palindrome.

#include <iostream>

using namespace std;

bool isPalindrome(int x){
    int temp=x;
    int reverse=0;
    while(temp!=0){
        reverse=reverse*10;
        reverse=reverse+temp%10;
        temp=temp/10;

    }
    if(reverse==x)
        return true;
    else
        return false;
}


int main() {

    int z;
    int max=-1;


    for(int i=100;i<1000;i++){

        for(int j=100;j<1000;j++){
            z=i*j;
            if(isPalindrome(z)&&z>max){
                max=z;
            }
        }
    }

cout<<max;

    return 0;
}