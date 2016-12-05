//
//  queue.c
//  algoooooriiithhm
//
//  Created by raspberry on 2016. 12. 5..
//  Copyright © 2016년 aaalllllgooooooriiiiithhhhmmmmm. All rights reserved.
//

#include "util.h"

int queue[8];

int tail=-1,head=0;
int queue_capacity = 8;
int input = 0;

void enqueue(int data){
    if(queue_capacity == input){
        printf("full!!\n");
        return;
    }
    tail = (tail + 1) % queue_capacity;
    input++;
    queue[tail] = data;
}
int dequeue(){
    int ret;
    if(input == 0){
        printf("empty!!\n");
        return 0;
    }
    ret = queue[head];
    head = (head + 1) % queue_capacity;
    input--;
    return ret;
}

int main(void){
    int i,r;
    while(1){
        printf("input number: ");
        scanf("%d",&i);
        if(i == 0){
            r = dequeue();
            if(r == 0){
                continue;
            }
            printf("[%d]\n",r);
        } else if (i == -1){
            break;
        } else {
            enqueue(i);
        }
    }
}
