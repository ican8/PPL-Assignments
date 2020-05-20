#include<stdio.h>

void fun();

int main(){
    int a[5];

    for (int i = 0; i < 7; i++)
    {
        a[i] = i;
    }
    a[7] = (int)&fun;
    a[8] = (int)&fun;
    a[9] = (int)&fun;
    a[10] = (int)&fun;
    a[11] = (int)&fun;
   // a[12] = (int)&fun;
    return 0;   
}

void fun(){
    printf("You are hacked!\n");
    int a[2];
    a[4] = (int)&main;
}
