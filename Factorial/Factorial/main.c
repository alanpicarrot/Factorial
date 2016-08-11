//
//  main.c
//  Factorial
//
//  Created by Chang Yu-hsiang on 2016/8/12.
//  Copyright © 2016年 Chang Yu-hsiang. All rights reserved.
//

#include <stdio.h>


int Fac(int n)
{

    if(n==0)return 1;
    else{
    
        int s=1, i;
        for(i=1;i<=n;i++)
            
            s=s*i;
        return s;
        
    }
}

int main(void) {
    int x;
    printf("請輸入數字：");
    scanf("%d",&x);
    Fac (x);
    printf("%d!=%d\n",x,Fac(x));
    return 0;
}


