//
// Created by BCIT on 2024-09-03.
//

#include "gcd.h"

int prototype(const int a, const int b) {

    int greatest = (a > b) ? a : b;
    for(int i = greatest; i > 0; i--) {
        if(((a % i) == 0) && ((b % i) == 0)){
            return i;
        } else {
            continue;
        }
    }

    return 0;
}
