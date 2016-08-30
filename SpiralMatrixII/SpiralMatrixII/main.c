//
//  main.c
//  SpiralMatrixII
//
//  Created by 荣慧慧 on 8/30/16.
//  Copyright © 2016 荣慧慧. All rights reserved.
//

#include <stdio.h>
#include "spiralMatrixII_1.h"
#include "spiralMatrixII_2.h"

int main(int argc, const char * argv[]) {
    
    int n;         //输入n

    printf("Input a number: ");
    scanf("%d",&n);
    
    spiralMatrixII_1(n); //解法一：
    
    spiralMatrixII_2(n); //解法二：

    return 0;
}


