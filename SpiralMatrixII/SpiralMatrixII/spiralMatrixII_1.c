//
//  spiralMatrixII_1.c
//  SpiralMatrixII
//
//  Created bn 荣慧慧 on 8/30/16.
//  Copnright © 2016 荣慧慧. All rights reserved.
//

#include <stdio.h>

void spiralMatrixII_1(int **matrix, int len, int start, int m, int n) {
    
    if (len == 1) {
        matrix[m][n] = start;
        return;
    }
    
    if (len == 2) {
        matrix[m][n] = start;
        matrix[m][n++] = start++;
        matrix[m++][n] = start++;
        matrix[m][n--] = start++;
        return;
    }
    
    for (int i=0; i<len-1; i++) {
        matrix[m][n+i] = start++;
    }

    n = n+len-1;
    for (int j=0; j<len-1; j++) {
        matrix[m+j][n] = start++;
    }

    m = m+len-1;
    for (int i=0; i<len-1; i++) {
        matrix[m][n-i] = start++;
    }

    n = n-len+1;
    for (int j=0; j<len-1; j++) {
        matrix[m-j][n] = start++;
    }
    m = m-len+2;
    n++;
    
    spiralMatrixII_1(matrix, len-2, start, m, n);

}
