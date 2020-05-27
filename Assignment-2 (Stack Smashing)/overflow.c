#include<stdio.h>
#include<unistd.h>
void fun();
void exploit();
int main(){
    
    printf("In main\n");
    fun();
    printf("Back to main\n");
    return 0;   
}

void fun(){
    int a[5];

    for (int i = 0; i < 7; i++)
    {
        a[i] = i;
    }
    a[10] = (int)&exploit;
}

void exploit(void){
	char *args[2];
     args[0] = "/bin/sh";
     args[1] = NULL;
     execve(args[0], args, NULL);
}
