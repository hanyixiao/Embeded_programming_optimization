/********************************************************************************
 * bublle_sort.c
 * Create by hanyixiao on 2020 4 20
 * Copyright (c) 2020 yixiaoHan.  All rights reserved.
 * hanyixiao@github.com
 * target arm-v7a rasbberypi-4B
 *******************************************************************************/      
#include <stdio.h>
int bubble_sort(int *data,int N)
{
    int temp;
    int i,j;
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1;j++)
        {
            if(data[j]<data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }  
    return 1;  
}