/********************************************************************************
 * main.c
 * Create by hanyixiao on 2020 4 20
 * Copyright (c) 2020 yixiaoHan.  All rights reserved.
 * hanyixiao@github.com
 * target arm-v7a rasbberypi-4B
 *******************************************************************************/
 #include <stdio.h>
 #include <stdlib.h>
#define N 32768

int bubble_sort(int *data,int n);
int bubble_sort_asm(int *data,int n);

int main(int argc,char **argv)
{
    int i,*data1,*data2;
    data1 = (int *)malloc(N*sizeof(int));
    data2 = (int *)malloc(N*sizeof(int));

    srand(11);
    for(i=0;i<N;i++) data1[i]=data2[i]=rand();
    buble_sort(data1,N);
    buble_sort_asm(data2,N);

    for(int i=0;i<N;i++)
    {
        if(data1[i]!=data2[i]){
            fprintf(stderr,"mismatch on elment %d\n",i);
            return 0;
        }
    }
    return 1;
}