//
//  fibbonacci.c
//  Euler Problems
//
//  Created by Brian on 5/12/12.
//  Copyright (c) 2012 Brian. All rights reserved.
//

#include <stdio.h>

int main(int number){
   return fibbo (number)
}
in fibbo (int number){
    if (number == 1) {
        return 1;
    }
    else {
        return fibbo(number-1)+fibbo(number-2);
    }
}