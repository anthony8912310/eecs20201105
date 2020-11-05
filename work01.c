//
//  main.c
//  test12
//
//  Created by admin on 2020/11/5.
//  Copyright © 2020 admin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 12321
    int n,i,j,k,p,q;
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        for (p=1; p<=n-i; p++) {
            printf("*");
        }
        for (j=i; j<=2*i-1; j++) {
            printf("%d",j);
        }
        for (k=2*i-2;k>=i; k--) {
            printf("%d",k);
        }
        for (p=1; p<=n-i; p++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
