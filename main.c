//
//  main.c
//  test 9
//
//  Created by admin on 2020/11/5.
//  Copyright © 2020 admin. All rights reserved.
//

#include <stdio.h>
int a;
int test(int num);
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    if (n>=10&&n<20)
    {
        if (n==10) {
            printf("ten");
        }else if (n==11) {
            printf("eleven");
        }else if (n==12) {
            printf("twelve");
        }else if (n==13) {
            printf("thirteen");
        }else if (n==14) {
            printf("fourteen");
        }else if (n==15) {
            printf("fifteen");
        }else if (n==16) {
            printf("sixteen");
        }else if (n==17) {
            printf("seventeen");
        }else if (n==18) {
            printf("eighteen");
        }else if (n==19) {
            printf("ninety");
        }
    }else if (n>=20&&n<30)
    {
        printf("twenty");
        if (n==20) {
            
        }else{
            printf("-");
        a=20;
        test(n);
        }
    }else if (n>=30&&n<40)
    {
        printf("thirty");
        if (n==30) {
            
        }else{
            printf("-");
        a=30;
        test(n);
        }
    }else if (n>=40&&n<50)
    {
        printf("forty");
        if (n==40) {
            
        }else{
            printf("-");
        a=40;
        test(n);
        }
    }else if (n>=50&&n<60)
    {
        printf("fifty");
        if (n==50) {
            
        }else{
            printf("-");
        a=50;
        test(n);
        }
    }else if (n>=60&&n<70)
    {
        printf("sixty");
        if (n==70) {
            
        }else{
            printf("-");
        a=60;
        test(n);
        }
    }else if (n>=70&&n<80)
    {
        printf("seventy");
        if (n==70) {
            
        }else{
            printf("-");
        a=70;
        test(n);
        }
    }else if (n>=80&&n<90)
    {
        printf("eighty");
        if (n==20) {
            
        }else{
            printf("-");
        a=80;
        test(n);
        }
    }else if (n>=90&&n<100)
    {
        printf("ninety");
        if (n==20) {
            
        }else{
            printf("-");
        a=90;
        test(n);
        }
    }else
    {
        printf("invalid");
    }
    printf("\n");
    return 0;
}
int test(int num)
{
    int i=num-a;
    if (i==1) {
        printf("one");
    }else if (i==2)
    {
        printf("two");
    }
    else if (i==3)
    {
        printf("three");
    }
    else if (i==4)
    {
        printf("four");
    }
    else if (i==5)
    {
        printf("five");
    }
    else if (i==6)
    {
        printf("six");
    }
    else if (i==7)
    {
        printf("seven");
    }
    else if (i==8)
    {
        printf("eight");
    }
    else if (i==9)
    {
        printf("nine");
    }
    return i;
}
