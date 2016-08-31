//
//  spiralMatrixII_1.c
//  SpiralMatrixII
//
//  Created bn 荣慧慧 on 8/30/16.
//  Copnright © 2016 荣慧慧. All rights reserved.
//

#include <stdio.h>

void spiralMatrixII_1(int **matrix, int len, int start, int m, int n) {
    
    /** n=2的情况也可以归类到4个for循环中，没有必要单独区分，只需要单独区分0or1的情况 */
    if (len == 0) {
        return;
    }
    
    
    if (len == 1) {
        matrix[m][n] = start;
        return;
    }
    
    /** 错误原因：前置/后置的++/--是在当前语句执行后再进行的 */
//    if (len == 2) {
//        matrix[m][n] = start;
//        matrix[m][n++] = start++;
//        matrix[m++][n] = start++;
//        matrix[m][n] = start++;
//        return;
//    }
    
    for (int i=n; i<n+len-1; i++) {
        matrix[m][i] = start++;
    }

    for (int j=m; j<m+len-1; j++) {
        matrix[j][n+len-1] = start++;
    }

    for (int i=n+len-1; i>n; i--) {
        matrix[m+len-1][i] = start++;
    }

    for (int j=m+len-1; j>m; j--) {
        matrix[j][n] = start++;
    }
    
    spiralMatrixII_1(matrix, len-2, start, ++m, ++n);

}
