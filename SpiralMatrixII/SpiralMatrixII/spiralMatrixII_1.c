//
//  spiralMatrixII_1.c
//  SpiralMatrixII
//
//  Created by 荣慧慧 on 8/30/16.
//  Copyright © 2016 荣慧慧. All rights reserved.
//

#include <stdio.h>

void spiralMatrixII_1(int n) {
    
    int kend=n/2;
    int lend=n;
    int count=1;
    int a[15][15];
    int i,j,k;
    
    for( i=0,j=0,k=0; k<kend; k++ )
    {
        a[i][j]=count++;
        
        for(j++;j<lend;j++)
            a[i][j]=count++;
        
        for(i++,j--;i<lend;i++)
            a[i][j]=count++;
        
        for(i--,j--;j>=k;j--)
            a[i][j]=count++;
        
        for(i--,j++;i>k;i--)
            a[i][j]=count++;
        
        i++;j++;lend--;
    }
    
    if(n%2 != 0) a[i][j]=count;
    
    for( i=0; i<n; i++ )
    {
        for( j=0; j<n; j++ )
            printf("%4d ",a[i][j]);
        printf("\n");
    }

}
