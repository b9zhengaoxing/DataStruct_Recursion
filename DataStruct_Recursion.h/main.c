//
//  main.c
//  DataStruct_Recursion.h
//
//  Created by tengfei li on 10/9/15.
//  Copyright (c) 2015年 LYD. All rights reserved.
//

//斐波那契数列，又称黄金分割数列，指的是这样一个数列：0、1、1、2、3、5、8、13、21、34、……在数学上，斐波纳契数列以如下被以递归的方法定义：F（0）=0，F（1）=1，F（n）=F(n-1)+F(n-2)（n≥2，n∈N*）

#include <stdio.h>

//获取斐波那契数列和
int getFibonacciMix(unsigned int num)
{
    if(num==1)
    {
        return 0;
    }//if
    if (num==2) {
        return 1;
    }//if
    
    else
    {
        return getFibonacciMix(num-1)+getFibonacciMix(num-2);
    }//else
}

int main(int argc, const char * argv[]) {
    
    printf("%d\n",getFibonacciMix(1));
    printf("Hello, World!\n");
    return 0;
}
