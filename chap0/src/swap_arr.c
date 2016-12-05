//
//  swap_arr.c
//  algoooooriiithhm
//
//  Created by raspberry on 2016. 12. 5..
//  Copyright © 2016년 aaalllllgooooooriiiiithhhhmmmmm. All rights reserved.
//

#include "util.h"
#include <time.h>

void swap_arr(int vector[],int i,int j){
    int temp = vector[i];
    vector[i] = vector[j];
    vector[j] = temp;
}

void rotate_arr(int vector[],int s,int t){
    int last = vector[t];
    for(int i = t;i > s;i--){
        vector[i] = vector[i-1];
    }
    vector[s] = last;
}

void rotate_left(int vector[],int s,int t){
    int first = vector[s];
    for(int i = s; i < t;i++){
        vector[i] = vector[i+1];
    }
    vector[t] = first;
}

/* 내가 짠 알고리즘
    이 알고리즘의 원리는 일단 움직일 반복수를 구하고 그걸 size랑 빼준다. 
    그러면 움직이고나서 덮여쓰여지는 블록의 크기가 나오는데 이걸 복사해서 다른 배열에 백업해둔후
    k값만큼 움직인후 있어야할 위치에 복붙한다.
 */
void rotate_custom(int vector[],int s,int t,int k){
    int size = (t - s + 1);
    int repeat = size - k;
    int back_size = size - repeat;
    int back_array[back_size];
    memmove(back_array, &vector[s+repeat], back_size * sizeof(int));
    for(int i = t; i > t - repeat;i--){
        vector[i] = vector[i-k];
    }
    memmove(&vector[s], back_array, back_size * sizeof(int));
}
void rotate_slow(int vector[],int s, int t,int k){
    for(int i=0;i<k;i++){
        rotate_arr(vector, s, t);
    }
}
