//
//  main.c
//  SpiralMatrixII
//
//  Created by 荣慧慧 on 8/30/16.
//  Copyright © 2016 荣慧慧. All rights reserved.
//

#include <stdio.h>
#include "spiralMatrixII_1.h"

int main(int argc, const char * argv[]) {
    
    int n; //输入n
    int **matrix;

    printf("Input a number: ");
    scanf("%d",&n);
    
    matrix = (int *)malloc(n*sizeof(int *)); //分配行
    
    for (int i=0; i<n; i++) {
        matrix[i] = (int *)malloc(n*sizeof(int)); //分配列
    }
    
    spiralMatrixII_1(matrix, n, 1, 0, 0); //解法一
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


