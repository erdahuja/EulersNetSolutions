//
// Created by Deepak Ahuja on 27/09/16.
//
//005 smallest multiple

#include <iostream>


using namespace std;

int findLcm(int n1,int n2){
    int minMultiple;
    minMultiple = (n1 > n2) ? n1 : n2;
    int lcm;
    // Always true
    while (1) {
        if (minMultiple % n1 == 0 && minMultiple % n2 == 0) {
            lcm = minMultiple;
            break;
        }
        ++minMultiple;
    }
    return lcm;

}
int main() {
    int n1, n2 ;
    int lcm=findLcm(1,2);
    for(int i=3;i<=20;i++){

        lcm= findLcm(lcm,i);

    }


    cout<<lcm;
    return 0;
}