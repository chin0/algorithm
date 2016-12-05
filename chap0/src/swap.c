//
//  swap.c
//  algoooooriiithhm
//
//  Created by raspberry on 2016. 12. 5..
//  Copyright © 2016년 aaalllllgooooooriiiiithhhhmmmmm. All rights reserved.
//

#include <stdio.h>

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
