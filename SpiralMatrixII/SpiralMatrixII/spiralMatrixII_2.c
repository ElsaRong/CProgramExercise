//
//  spiralMatrixII_2.c
//  SpiralMatrixII
//
//  Created by 荣慧慧 on 8/30/16.
//  Copyright © 2016 荣慧慧. All rights reserved.
//

#include <stdio.h>

int spiral() {
    
    return a[][];
}

void spiralMatrixII_2(int n) {
    
    int a[15][15];
    int x=0,y=0;
    int num = 1;
    
    
    if (n == 1) {
        a[x][y] = num;
    } else if (n == 2) {
        a[x][y] = num;
        a[x++][y] = num++;
        a[x][y++] = num++;
        a[x--][y] = num++;
    } else {
        
        spiral();
    }
    
}