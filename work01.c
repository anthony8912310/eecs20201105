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
    int n,i,j;
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        for (j=1; j<=n-i; j++) {
            printf("*");
        }
        for (j=i; j<2*i-1; j++) {
            printf("%d",j);
        }
        printf("%d",j);
        for (j=2*i-2;j>=i; j--) {
            printf("%d",j);
        }
        for (j=1; j<=n-i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
