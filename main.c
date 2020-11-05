//
//  main.c
//  work02
//
//  Created by admin on 2020/11/5.
//  Copyright © 2020 admin. All rights reserved.
//

#include <stdio.h>
void a(int i);
void b(int i);
int test;
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    if (n<10||n>=100) {
        printf("invalid");
    }
    else
    {
        a(n);
        b(n);
    }
    printf("\n");
    return 0;
}
void a(int i)
{
       if (i>=10&&i<20)
     {
         if (i==10) {
             printf("ten");
         }else if (i==11) {
             printf("eleven");
         }else if (i==12) {
             printf("twelve");
         }else if (i==13) {
             printf("thirteen");
         }else if (i==14) {
             printf("fourteen");
         }else if (i==15) {
             printf("fifteen");
         }else if (i==16) {
             printf("sixteen");
         }else if (i==17) {
             printf("seventeen");
         }else if (i==18) {
             printf("eighteen");
         }else if (i==19) {
             printf("ninety");
         }
     }else if (i>=20&&i<30)
     {
         printf("twenty");
         if (i==20) {
             
         }else{
             printf("-");
         test=20;
         }
     }else if (i>=30&&i<40)
     {
         printf("thirty");
         if (i==30) {
             
         }else{
             printf("-");
         test=30;
         }
     }else if (i>=40&&i<50)
     {
         printf("forty");
         if (i==40) {
             
         }else{
             printf("-");
         test=40;
         }
     }else if (i>=50&&i<60)
     {
         printf("fifty");
         if (i==50) {
             
         }else{
             printf("-");
         test=50;
         }
     }else if (i>=60&&i<70)
     {
         printf("sixty");
         if (i==70) {
             
         }else{
             printf("-");
         test=60;
         }
     }else if (i>=70&&i<80)
     {
         printf("seventy");
         if (i==70) {
             
         }else{
             printf("-");
         test=70;
         }
     }else if (i>=80&&i<90)
     {
         printf("eighty");
         if (i==20) {
             
         }else{
             printf("-");
         test=80;
         }
     }else if (i>=90&&i<100)
     {
         printf("ninety");
         if (i==20) {
             
         }else{
             printf("-");
         test=90;
         }
     }
}
void b(int i)
{
    i=i-test;
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
}
